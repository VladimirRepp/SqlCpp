#pragma once

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

ref class IBaseModel
{
public:
	int Id;

    property String^ ToParamINSERT {
        virtual String^ get() {
            return "";
        }
    }

    property String^ ToParamUPDATE {
        virtual String^ get() {
            return "";
        }
    }

    property List<String^>^ ToListStr {
        virtual List<String^>^ get() {
            return gcnew List<String^>();
        }
    }

    virtual void SetData(SqlDataReader^ reader) = 0;
};

