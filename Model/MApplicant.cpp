#include "MApplicant.h"

MApplicant::MApplicant()
{
    this->Id = 0;
    this->Fullname = "";
    this->Gender = "";
    this->DateBirth = "";
    this->AvrScore = "";
    this->CopyPassport = "";
    this->CopySNILS = "";
    this->CopyMed = "";
}

MApplicant::MApplicant(int Id, String^ Fullname, String^ Gender, String^ DateBirth, String^ AvrScore, String^ CopyPassport, String^ CopySNILS, String^ CopyMed)
{
    this->Id = Id;
    this->Fullname = Fullname;
    this->Gender = Gender;
    this->DateBirth = DateBirth;
    this->AvrScore = AvrScore;
    this->CopyPassport = CopyPassport;
    this->CopySNILS = CopySNILS;
    this->CopyMed = CopyMed;
}

MApplicant::MApplicant(SqlDataReader^ reader)
{
    SetData(reader);
}

MApplicant::~MApplicant()
{
}

void MApplicant::SetData(SqlDataReader^ reader)
{
    this->Id = Convert::ToInt32(reader["Id"]);
    this->Fullname = reader["Fullname"]->ToString();
    this->Gender = reader["Gender"]->ToString();
    this->DateBirth = reader["DateBirth"]->ToString();
    this->AvrScore = reader["AvrScore"]->ToString();
    this->CopyPassport = reader["CopyPassport"]->ToString();
    this->CopySNILS = reader["CopySNILS"]->ToString();
    this->CopyMed = reader["CopyMed"]->ToString();
}
