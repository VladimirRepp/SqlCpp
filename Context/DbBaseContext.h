#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

ref class DbBaseContext
{
protected:
    String^ _connectionString = L"Data Source=localhost\\SQLEXPRESS;Initial Catalog=(446)database;Integrated Security=True;Encrypt=False";
    String^ _tableName;
    String^ _query;

    SqlDataAdapter^ _adapter;
    DataSet^ _dataSet;
    SqlConnection^ _connection;
	SqlCommand^ _command;
	SqlDataReader^ _reader;

public:
	DbBaseContext();

	property String^ ConnectionString {
		String^ get() {
			return _connectionString;
		}

		void set(String^ value) {
			_connectionString = value;
		}
	}

	property String^ TableName {
		String^ get() {
			return _tableName;
		}

		void set(String^ value) {
			_tableName = value;
		}
	}

	property SqlDataAdapter^ Adapter {
		SqlDataAdapter^ get() {
			return _adapter;
		}

		void set(SqlDataAdapter^ value) {
			_adapter = value;
		}
	}

	property DataSet^ DSet {
		DataSet^ get() {
			return _dataSet;
		}

		void set(DataSet^ value) {
			_dataSet = value;
		}
	}

	property SqlConnection^ Connection {
		SqlConnection^ get() {
			return _connection;
		}

		void set(SqlConnection^ value) {
			_connection = value;
		}
	}
};

