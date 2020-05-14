/*
Project: budget-logger

Description: This is a tool that accepts user inputted data and organizes the
	data into a .csv file for insights into trends over time.

Author: Garrett Wyrick
*/
 
#include"menus.hpp"

#include<iostream>

int main() {
	// Build the main menu START
	menus::Menu MainMenu("Budget Logger");
	MainMenu.AddOption("Exit the program.");
	MainMenu.AddOption("I am an option.");
	MainMenu.AddOption("I, also!");
	MainMenu.AddOption("Third, am I.");
	// Build the main menu END

	MainMenu.Print();

	switch (MainMenu.GetChoice()) { // TODO Explore capturing ESC key
	case 1: EXIT_SUCCESS;
	case 2: break;
	case 3: break;
	case 4: break;
	}

	return 0;
}