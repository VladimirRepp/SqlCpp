#include "DbUserContext.h"

DbUserContext::DbUserContext()
{
    _data = gcnew List<MUser^>();
    _tableName = "Users";
}

MUser^ DbUserContext::operator[](int index)
{
    if (index < 0 || index >= _data->Count) {
        throw gcnew Exception("DbUserContext::operator[]: Index Out Of Range!");
    }

    return _data[index];
}

int DbUserContext::FindById(int id)
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

MUser^ DbUserContext::Query_SelectByLoginAndPassword(String^ login, String^ password)
{
    MUser^ found = nullptr;

    try {
        _query = "SELECT * FROM " + _tableName + " WHERE Login = @login AND Password = @password";

        _command->CommandText = _query;
        _command->Parameters->AddWithValue("@login", login);
        _command->Parameters->AddWithValue("@password", password);

        _connection->Open();

        _reader = _command->ExecuteReader();

        while (_reader->Read())
        {
            found = gcnew MUser();
            found->SetData(_reader);
        }
    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbUserContext::Query_SelectById(): " + ex->Message);
    }
    finally {
        _reader->Close();
        _connection->Close();
        _command->Parameters->Clear();
    }

    return found;
}

MUser^ DbUserContext::Query_SelectById(int id)
{
    MUser^ found = nullptr;

    try {
        _query = "SELECT * FROM " + _tableName + " WHERE Id = @id";

        _command->CommandText = _query;
        _command->Parameters->AddWithValue("@id", id);

        _connection->Open();

        _reader = _command->ExecuteReader();

        while (_reader->Read())
        {
            found = gcnew MUser();
            found->SetData(_reader);
        }

    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbUserContext::Query_SelectById(): " + ex->Message);
    }
    finally {
        _reader->Close();
        _connection->Close();
        _command->Parameters->Clear();
    }

    return found;
}

bool DbUserContext::Query_TrySelectByLoginAndPassword(String^ login, String^ password, MUser^ found)
{
    found = nullptr;

    try {
        _query = "SELECT * FROM " + _tableName + " WHERE Login = @login AND Password = @password";

        _command->CommandText = _query;
        _command->Parameters->AddWithValue("@login", login);
        _command->Parameters->AddWithValue("@password", password);

        _connection->Open();

        _reader = _command->ExecuteReader();

        while (_reader->Read())
        {
            found = gcnew MUser();
            found->SetData(_reader);
        }
    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbUserContext::Query_TrySelectById(): " + ex->Message);
    }
    finally {
        _reader->Close();
        _connection->Close();
        _command->Parameters->Clear();
    }

    return found != nullptr;
}

bool DbUserContext::Query_TrySelectById(int id, MUser^ found)
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
            found = gcnew MUser();
            found->SetData(_reader);
        }

    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbUserContext::Query_TrySelectById(): " + ex->Message);
    }
    finally {
        _reader->Close();
        _connection->Close();
        _command->Parameters->Clear();
    }

    return found != nullptr;
}

bool DbUserContext::Query_Select()
{
    _data->Clear();

    try {
        _query = "SELECT * FROM " + _tableName;
        _command->CommandText = _query;
        _connection->Open();

        _reader = _command->ExecuteReader();

        while (_reader->Read())
        {
            auto item = gcnew MUser(_reader);
            _data->Add(item);
        }

    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbUserContext::Query_Select(): " + ex->Message);
    }
    finally {
        _reader->Close();
        _connection->Close();
    }

    return _data->Count > 0;
}

bool DbUserContext::Query_Insert(MUser^ item)
{
    bool isDone = false;

    try {
        _query = "INSERT " + _tableName + " " + item->ToParamINSERT;
        _command->CommandText = _query;

        int i = 0;
        for each (String^ param in item->ToListStr)
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
        throw gcnew Exception("DbUserContext::Query_Insert(): " + ex->Message);
    }
    finally {
        _connection->Close();
        _command->Parameters->Clear();
    }

    return isDone;
}

bool DbUserContext::Query_Update(MUser^ item)
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
                throw gcnew Exception("DbUserContext::Query_Update(): FindById вернул -1!");
            }

            _data[index] = item;
            isDone = true;
        }
    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbUserContext::Query_Update(): " + ex->Message);
    }
    finally {
        _connection->Close();
        _command->Parameters->Clear();
    }

    return isDone;
}

bool DbUserContext::Query_Delete(int id)
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
                throw gcnew Exception("DbUserContext::Query_Delete(): FindById вернул -1!");
            }

            _data->RemoveAt(index);
            isDone = true;
        }
    }
    catch (Exception^ ex) {
        throw gcnew Exception("DbUserContext::Query_Update(): " + ex->Message);
    }
    finally {
        _connection->Close();
        _command->Parameters->Clear();
    }

    return isDone;
}
