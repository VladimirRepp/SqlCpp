#pragma once
#include "IBaseModel.h"

ref class MApplicant :
    public IBaseModel
{
public:
    String^ Fullname;
    String^ Gender;
    String^ DateBirth;
    String^ AvrScore;
    String^ CopyPassport;
    String^ CopySNILS;
    String^ CopyMed;

    property String^ ToParamINSERT {
        String^ get() override {
            return "([Fullname], [Gender], [DateBirth], [AvrScore], [CopyPassport], [CopySNILS], [CopyMed])" +
                "VALUES(@param0, @param1, @param2, @param3, @param4, @param5, @param6)";
        }
    }

    property String^ ToParamUPDATE {
        String^ get() override {
            return "Fullname = @param0, Gender = @param1, DateBirth = @param2, AvrScore = @param3, CopyPassport = @param4, CopySNILS = @param5, CopyMed = @param6";
        }
    }

    property List<String^>^ ToListStr {
        List<String^>^ get() override {
            List<String^>^ list = gcnew List<String^>();
            list->Add(Fullname);
            list->Add(Gender);
            list->Add(DateBirth);
            list->Add(AvrScore);
            list->Add(CopyPassport);
            list->Add(CopySNILS);
            list->Add(CopyMed);

            return list;
        }
    }

    MApplicant();
    MApplicant(int Id, String^ Fullname, String^ Gender, String^ DateBirth, String^ AvrScore, String^ CopyPassport, String^ CopySNILS, String^ CopyMed);
    MApplicant(SqlDataReader^ reader);
    ~MApplicant();


    void SetData(SqlDataReader^ reader) override;
};

