#include"menus.hpp"

namespace menus {

	void Menu::AddOption(const std::string& in_option) {
		m_options.push_back(in_option);
		m_num_options++;
	}

	void Menu::Print() {
		int i = 0;
		std::cout << "\n<<< " << m_title << " >>>" << std::endl;
		for (std::string option : m_options) {
			std::cout << " " << i << ") " << option << std::endl;
			i++;
		}
	}

	int Menu::GetChoice() {
		int choice = -1;
		while (choice < 0 || choice > (m_num_options - 1)) {
			std::cout << std::flush << "Make your choice [0-"
				<< (m_num_options - 1) << "]: ";
			std::cin >> choice;
		}
		return choice;
	}
	
	/*Menu BuildSomeMenu() {
		Menu MainMenu("Some Menu");
		MainMenu.AddOption("This is an option");
		MainMenu.AddOption("I am also one");
		MainMenu.AddOption("Third option!");
		MainMenu.AddOption("Exit");
		return MainMenu;
	}*/

} // namespace menus