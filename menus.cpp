#include"menus.hpp"

namespace menus {
	// Menu class public functions
	void Menu::AddOption(const std::string& in_option) {
		m_options.push_back(in_option);
		m_num_options++;
	}
	void Menu::Print() {
		int i = 1;
		std::cout << "\n*** " << m_title << " ***" << std::endl;
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
	// Non-member functions
	int RunMainMenu() {
		Menu MainMenu("Budget Logger");
		MainMenu.AddOption("Exit.");
		MainMenu.AddOption("Add expense record.");
		MainMenu.AddOption("Print all records.");
		MainMenu.AddOption("I, also!");
		MainMenu.AddOption("Run test function.");
		MainMenu.Print();
		return MainMenu.GetChoice();
	}
} // namespace menus