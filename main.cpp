/*
Project: budget-logger

Description: This is a tool that accepts user inputted data and organizes the
	data into a .csv file for insights into trends over time.

Author: Garrett Wyrick
*/
 
#include"menus.hpp"

#include<iostream>

// TEST git personal access token with visual studio GCMW

int main() {
	std::cout << "I am a tool for logging budget data!" << std::endl
		<< "In the future I will be able to accept data." << std::endl;

	menus::Menu MainMenu("Budget Logger");
	MainMenu.AddOption("Exit the program");
	MainMenu.AddOption("I am also one");
	MainMenu.AddOption("Third option!");
	MainMenu.AddOption("This is an option");

	MainMenu.Print();

	switch (MainMenu.GetChoice()) { // TODO Explore capturing ESC key
	case 0: EXIT_SUCCESS;
	case 1: break;
	case 2: break;
	case 3: break;
	}

	//menus::DisplayMainMenu();

	return 0;
}