#include "DbApplicantContext.h"

DbApplicantContext::DbApplicantContext()
{
    _data = gcnew List<MApplicant^>();
    _tableName = "Applicant";
}

MApplicant^ DbApplicantContext::operator[](int index)
{
    if (index < 0 || index >= _data->Count) {
        throw gcnew Exception("DbApplicantContext::operator[]: Index Out Of Range!");
    }

    return _data[index];
}

int DbApplicantContext::FindById(int id)
{
    int i = 0;
    for each (auto item in _data)
    {
        if (item->Id == id)
            return i;
        ++i;
    }

    return -1;
}

MApplicant^ DbApplicantContext::Query_SelectById(int id)
{
    MApplicant^ found = nullptr;

    try {
        _query = "SELECT * FROM " + _tableName + " WHERE Id = @id";

        _command->CommandText = _query;
        _command->Parameters->AddWithValue("@id", id);

        _connection->Open();

        _reader = _command->ExecuteReader();

        while (_reader->Read())
        {
            found = gcnew MApplicant();
            found->SetData(_reader);
        }

    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbApplicantContext::Query_SelectById(): " + ex->Message);
    }
    finally {
        _reader->Close();
        _connection->Close();
        _command->Parameters->Clear();
    }

    return found;
}

bool DbApplicantContext::Query_TrySelectById(int id, MApplicant^ found)
{
    found = nullptr;

    try {
        _query = "SELECT * FROM " + _tableName + " WHERE Id = @id";

        _command->CommandText = _query;
        _command->Parameters->AddWithValue("@id", id);

        _connection->Open();

        _reader = _command->ExecuteReader();

        while (_reader->Read())
        {
            found = gcnew MApplicant();
            found->SetData(_reader);
        }

    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbApplicantContext::Query_TrySelectById(): " + ex->Message);
    }
    finally {
        _reader->Close();
        _connection->Close();
        _command->Parameters->Clear();
    }

    return found != nullptr;
}

bool DbApplicantContext::Query_Select()
{
    _data->Clear();

    try {
        _query = "SELECT * FROM " + _tableName;
        _command->CommandText = _query;
        _connection->Open();

        _reader = _command->ExecuteReader();

        while (_reader->Read())
        {
            auto item = gcnew MApplicant(_reader);
            _data->Add(item);
        }
    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbApplicantContext::Query_Select(): " + ex->Message);
    }
    finally {
        _reader->Close();
        _connection->Close();
    }

    return _data->Count > 0;
}

bool DbApplicantContext::Query_Insert(MApplicant^ item)
{
    bool isDone = false;

    try {
        _query = "INSERT " + _tableName + " " + item->ToParamINSERT;
        _command->CommandText = _query;

        int i = 0;
        for each (String ^ param in item->ToListStr)
        {
            String^ name = "@param" + (i++).ToString();
            _command->Parameters->AddWithValue(name, param);
        }

        _connection->Open();

        if (_command->ExecuteNonQuery() == 1)
        {
            _data->Add(item);
            isDone = true;
        }
    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbApplicantContext::Query_Insert(): " + ex->Message);
    }
    finally {
        _connection->Close();
        _command->Parameters->Clear();
    }

    return isDone;
}

bool DbApplicantContext::Query_Update(MApplicant^ item)
{
    bool isDone = false;

    try {
        _query = "UPDATE " + _tableName + " SET " + item->ToParamUPDATE + " WHERE Id = @id";
        _command->CommandText = _query;

        int i = 0;
        _command->Parameters->AddWithValue("@id", item->Id);
        for each (String ^ param in item->ToListStr)
        {
            String^ name = "@param" + (i++).ToString();
            _command->Parameters->AddWithValue(name, param);
        }

        _connection->Open();

        if (_command->ExecuteNonQuery() == 1)
        {
            int index = FindById(item->Id);

            if (index == -1) {
                throw gcnew Exception("DbApplicantContext::Query_Update(): FindById вернул -1!");
            }

            _data[index] = item;
            isDone = true;
        }
    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbApplicantContext::Query_Update(): " + ex->Message);
    }
    finally {
        _connection->Close();
        _command->Parameters->Clear();
    }

    return isDone;
}

bool DbApplicantContext::Query_Delete(int id)
{
    bool isDone = false;

    try {
        _query = "DELETE " + _tableName + "  WHERE Id = @id";
        _command->CommandText = _query;
        _command->Parameters->AddWithValue("@id", id);

        _connection->Open();

        if (_command->ExecuteNonQuery() == 1)
        {
            int index = FindById(id);

            if (index == -1) {
                throw gcnew Exception("DbApplicantContext::Query_Delete(): FindById вернул -1!");
            }

            _data->RemoveAt(index);
            isDone = true;
        }
    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbApplicantContext::Query_Update(): " + ex->Message);
    }
    finally {
        _connection->Close();
        _command->Parameters->Clear();
    }

    return isDone;
}
