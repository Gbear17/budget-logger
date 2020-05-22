#ifndef RECORDS_LIST_H
#define RECORDS_LIST_H

#include<string>
#include<vector>
#include<ctime>

namespace records_list {

	/*
	Object Type: Struct in namespace log_io
	Description: Contains data elements in a single record (log entry)
	Data Members:
		std::string date;
		std::string time;
		std::string category;
		double dollar_amount;
	*/
	struct Record {
		std::string date;
		std::string time;
		std::string category;
		double dollar_amount;
	};

	/*
	Object Type: Class in namespace log_io
	Description: Holds list of records (log entries) as well as the functions
		to manage the list
	*/
	class RecordsList {
	private:
		std::vector<Record> m_records_list;
	public:
		RecordsList();
	};

} // namespace records_list

#endif