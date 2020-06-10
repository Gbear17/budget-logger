/*
Project: budget-logger

Description: This is a tool that accepts user inputted data and organizes the
	data into a .csv file for insights into trends over time.

Author: Garrett Wyrick
*/

#include"menus.hpp"
#include"records.hpp"

#include<iostream>
#include "main.h"

int main() {
	records::List records_list;
	

	for (;;) {
		switch (menus::RunMainMenu()) {
		case 1: return EXIT_SUCCESS;
		case 2: records_list.AddRecord(); break;
		case 3: records_list.Print("all"); break;
		case 4: break;
		case 5: records::List list; list.TEST_FUNC(); break;
		}
	}

	return 0;
}

// file, accessor function, namespace, variable, and data member this_is_one
// class data member m_this_is_one
// object (class, struct, functions, etc) ThisIsOne