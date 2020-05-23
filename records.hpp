#ifndef RECORDS_LIST_H
#define RECORDS_LIST_H

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<vector>
#include<ctime> // tm struct and associated functions

namespace records {

	/*
	Object Type: Struct in namespace records_list
	Description: Contains data elements in a single record (log entry)
	Data Members:
		std::string date_time;
		std::string expense_category;
		std::string amount_USD;
	*/
	struct Record {
		std::string date_time;
		std::string expense_category;
		std::string amount_USD;
	};

	/*
	Object Type: Class in namespace records_list
	Description: Holds list of records (log entries) as well as the functions
		to manage the list
	*/
	class List {
	private:
		std::vector<Record> m_records;

		std::string GetDateTime();
	public:
		List();
		void AddRecord(std::string const in_expense_category,
			double const in_amount_USD);
		void Print();

		void TEST_FUNC();
	};

} // namespace records_list

#endif