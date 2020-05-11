#ifndef INIT_MENU_H_
#define INIT_MENU_H_

#include<iostream>
#include<string>
#include<vector>

namespace menus {
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

	// builds some menu and returns the Menu object
	//Menu BuildSomeMenu();

} // namespace menus

#endif