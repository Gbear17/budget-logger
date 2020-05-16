#ifndef MENUS_H_
#define MENUS_H_

#include<iostream>
#include<string>
#include<vector>

namespace menus {
	/*
	Object Type: Class in namespace menus
	Description: Contains private data members and public methods for building,
		and utilizing a menu as a user interface
	Returns: N/A
	*/
	class Menu {
		std::string m_title;
		std::vector<std::string> m_options;
		int m_num_options;
	public:
		Menu(const std::string& in_title) : m_title(in_title),
			m_num_options(0) {}
		void AddOption(const std::string& in_option);
		void Print();
		int GetChoice();
	};

	// Menu class above /\
	// Menu builders below \/

	/*
	Object Type: Function in namespace menus
	Description: Builds and displays the Main Menu then
		requests the users' choice
	Returns: int value of users' choice
	*/
	int RunMainMenu();

} // namespace menus

#endif