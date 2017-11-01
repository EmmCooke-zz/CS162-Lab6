/*************************************************
* Program: Lab6 - Linked Lists
* Author: Emmet Cooke
* Date: 10/31/2017
* Description: 
*************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Menu.hpp"
#include "validateInput.hpp"

int main()
{
	Menu mainMenu("Choose from the following options: ", 6);
	mainMenu.setOption(0, "Add a Node to the head");
	mainMenu.setOption(1, "Add a Node to the tail");
	mainMenu.setOption(2, "Remove a Node from the head");
	mainMenu.setOption(3, "Remove a Node from the tail");
	mainMenu.setOption(4, "Print the values in reverse order");
	mainMenu.setOption(5, "Exit Program");

	cout << "Welcome to my Double-Link Program!" << endl << endl;

	bool exitChoice = false;
	string validateInput;
	int menuChoice;

	while (!exitChoice)
	{
		mainMenu.printPrompt();
		mainMenu.printOptions();
		getline(cin, validateInput);
		menuChoice = getInt(validateInput);

		switch (menuChoice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			exitChoice = true;
			break;
		default:
			cout << "Please enter a valid menu choice." << endl;
		}

	}

	return 0;
}