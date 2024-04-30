#include "DbBaseContext.h"

DbBaseContext::DbBaseContext()
{
    _connection = gcnew SqlConnection(_connectionString);
    _command = gcnew SqlCommand();
    _command->Connection = _connection;
    _tableName = "default";
}
