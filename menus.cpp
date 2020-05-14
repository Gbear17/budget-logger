#include"menus.hpp"

namespace menus {

	void Menu::AddOption(const std::string& in_option) {
		m_options.push_back(in_option);
		m_num_options++;
	}

	void Menu::Print() {
		int i = 1;
		std::cout << "\n<<< " << m_title << " >>>" << std::endl;
		for (std::string option : m_options) {
			std::cout << " " << i << ") " << option << std::endl;
			i++;
		}
	}

	int Menu::GetChoice() {
		int choice = 0;
		while (choice < 1 || choice > m_num_options) {
			std::cout << std::flush << "Make your choice [0-"
				<< m_num_options << "]: ";
			std::cin >> choice;
		}
		return choice;
	}

} // namespace menus