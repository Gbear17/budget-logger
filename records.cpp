#include"records.hpp"

namespace records {
	// List class private functions
	std::string List::GetDateTime() {
		char current_date_time[22] = { NULL };
		std::time_t raw_time = std::time(nullptr);
		tm* time = std::localtime(&raw_time);
		std::strftime(current_date_time, 22, "%Y/%m/%d - %H:%M:%S", time);
		return current_date_time;
	}
	// List class public functions
	List::List() {
		Record column_heads;
		column_heads.date_time = "Date & Time";
		column_heads.expense_category = "Expense Category";
		column_heads.amount_USD = "Amount (USD)";
		m_records.push_back(column_heads);
	}
	void List::AddRecord() {
		Record new_record;
		std::cout << "\n*** Adding Expense Record ***" << std::endl;
		new_record.date_time = GetDateTime();
		std::cout << "Enter category: ";
		std::cin >> new_record.expense_category;
		transform(new_record.expense_category.begin(),
			new_record.expense_category.end(),
			new_record.expense_category.begin(), ::tolower);
		std::cout << "Enter the amount (USD): ";
		std::cin >> new_record.amount_USD;
		m_records.push_back(new_record);
	}
	void List::Print(std::string in_category) {
		transform(in_category.begin(), in_category.end(), in_category.begin(),
			::tolower);
		std::cout << "\n+++ List of Records +++" << std::endl;
		std::cout << "Category: " << in_category << std::endl;
		for (int i = 0; i < m_records.size(); i++) {
			if (this->m_records[i].expense_category == in_category
				|| in_category == "all") {
				std::cout << " -\n" << m_records[i].date_time << std::endl;
				std::cout << m_records[i].expense_category << std::endl;
				std::cout << "$" << m_records[i].amount_USD << std::endl;
			}
		}
		std::cout << " -\n+++ End of Records +++" << std::endl;
		std::cout << "Press enter to continue . . .";
		std::cin.get();
		std::cin.get();
	}
	void List::TEST_FUNC() {
		std::cout << "\nTEST_FUNC: " << GetDateTime() << std::endl;
	}
} // namespace records_list