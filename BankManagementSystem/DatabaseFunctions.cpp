#include "Database.h"

Database::Database(const char* filename)
{
	database = NULL;
	open(filename);
}

Database::~Database()
{
}

bool Database::open(const char* filename)
{
	if (sqlite3_open(filename, &database) == SQLITE_OK)
		return true;

	return false;
}

vector<vector<string> > Database::query(const char* query)
{
	sqlite3_stmt *statement;
	vector<vector<string> > results;

	if (sqlite3_prepare_v2(database, query, -1, &statement, 0) == SQLITE_OK)
	{
		int cols = sqlite3_column_count(statement);
		int result = 0;
		while (true)
		{
			result = sqlite3_step(statement);

			if (result == SQLITE_ROW)
			{
				vector<string> values;
				for (int col = 0; col < cols; col++)
				{
					std::string  val;
					char * ptr = (char*)sqlite3_column_text(statement, col);

					if (ptr)
					{
						val = ptr;
					}
					else val = ""; // this can be commented out since std::string  val;
								   // initialize variable 'val' to empty string anyway

					values.push_back(val);  // now we will never push NULL
				}
				results.push_back(values);
			}
			else
			{
				break;
			}
		}

		sqlite3_finalize(statement);
	}

	string error = sqlite3_errmsg(database);
	if (error != "not an error") results[0][0] = error;

	return results;
}

void Database::close()
{
	sqlite3_close(database);
}