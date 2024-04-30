#pragma once
#include "MUser.h"
#include "DbBaseContext.h"

ref class DbUserContext : 
	public DbBaseContext
{
private: 
	List<MUser^>^ _data;

public:
	DbUserContext();
	
	property int Count {
		int get() {
			return _data->Count;
		}
	}
	
	property List<MUser^>^ Data {
		List<MUser^>^ get() {
			return _data;
		}

		void set(List<MUser^>^ value) {
			_data = value;
		}
	}

	MUser^ operator[](int index);

	int FindById(int id);

	MUser^ Query_SelectByLoginAndPassword(String^ login, String^ password);
	MUser^ Query_SelectById(int id);
	bool Query_TrySelectByLoginAndPassword(String^ login, String^ password, MUser^ found);
	bool Query_TrySelectById(int id, MUser^ found);
	bool Query_Select();
	bool Query_Insert(MUser^ item);
	bool Query_Update(MUser^ item);
	bool Query_Delete(int id);
};

