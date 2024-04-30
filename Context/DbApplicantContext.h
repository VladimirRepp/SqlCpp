#pragma once
#include "MApplicant.h"
#include "DbBaseContext.h"

ref class DbApplicantContext :
	 public DbBaseContext
{
private:
	List<MApplicant^>^ _data;

public:
	DbApplicantContext();

	property int Count {
		int get() {
			return _data->Count;
		}
	}

	property List<MApplicant^>^ Data {
		List<MApplicant^>^ get() {
			return _data;
		}

		void set(List<MApplicant^>^ value) {
			_data = value;
		}
	}

	MApplicant^ operator[](int index);

	int FindById(int id);

	MApplicant^ Query_SelectById(int id);
	bool Query_TrySelectById(int id, MApplicant^ found);
	bool Query_Select();
	bool Query_Insert(MApplicant^ item);
	bool Query_Update(MApplicant^ item);
	bool Query_Delete(int id);
};

