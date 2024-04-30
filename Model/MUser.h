#pragma once
#include "IBaseModel.h"

ref class MUser :
    public IBaseModel
{
public:
    String^ Login;
    String^ Password;
    String^ Role;

    property String^ ToParamINSERT {
        String^ get() override{
            return "([Login], [Password], [Role]) VALUES (@param0, @param1, @param2)";
        }
    }

    property String^ ToParamUPDATE {
        String^ get() override {
            return "Login = @param0, Password = @param1, Role = @param2";
        }
    }

    property List<String^>^ ToListStr {
        List<String^>^ get() override {
            List<String^>^ list = gcnew List<String^>();
            list->Add(Login);
            list->Add(Password);
            list->Add(Role);

            return list;
        }
    }

    MUser();
    MUser(int Id, String^ Login, String^ Password, String^ Role);
    MUser(SqlDataReader^ reader);
    ~MUser();


    void SetData(SqlDataReader^ reader) override;
};

