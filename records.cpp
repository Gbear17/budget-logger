#include"records.hpp"

namespace records {

	std::string List::GetDateTime() {
		char current_date_time[22] = {NULL};

		std::time_t raw_time = std::time(nullptr);
		tm * tmp = std::localtime(&raw_time);
		
		std::strftime(current_date_time, 22, "%Y/%m/%d - %H:%M:%S", tmp);

		return current_date_time;
	}
	List::List() {
		Record column_heads;
		column_heads.date_time = "Entry Date and Time";
		column_heads.expense_category = "Expense Category";
		column_heads.amount_USD = "Amount (USD)";

		m_records.push_back(column_heads);
	}

	void List::AddRecord(std::string const in_expense_category,
		double const in_amount_USD) {

	}

	void List::Print() {

	}

	void List::TEST_FUNC() {
		std::cout << "TEST_FUNC: " << GetDateTime() << std::endl;
	}

} // namespace records_list