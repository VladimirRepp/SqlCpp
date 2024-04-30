#include "MUser.h"

MUser::MUser()
{
    this->Id = 0;
    this->Login = "";
    this->Password = "";
    this->Role = "";
}

MUser::MUser(int Id, String^ Login, String^ Password, String^ Role)
{
    this->Id = Id;
    this->Login = Login;
    this->Password = Password;
    this->Role = Role;
}

MUser::MUser(SqlDataReader^ reader)
{
    SetData(reader);
}

MUser::~MUser()
{
}

void MUser::SetData(SqlDataReader^ reader)
{
    Id = Convert::ToInt32(reader["Id"]);

    Login = reader["Login"]->ToString();
    Password = reader["Password"]->ToString();
    Role = reader["Role"]->ToString();
}
