/*************************************************
* Program: Lab6 - Linked Lists
* Author: Emmet Cooke
* Date: 10/31/2017
* Description: This file contains the main menu
* for Lab6. It goes through a menu offering the 
* user a variety of choices on what to do with a linked
* list, until they choose to exit the program.
*************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Menu.hpp"
#include "validateInput.hpp"
#include "DoubleLink.hpp"

int main()
{
	Menu mainMenu("Choose from the following options: ", 8);
	mainMenu.setOption(0, "Add a Node to the head");
	mainMenu.setOption(1, "Add a Node to the tail");
	mainMenu.setOption(2, "Remove a Node from the head");
	mainMenu.setOption(3, "Remove a Node from the tail");
	mainMenu.setOption(4, "Print the values in reverse order");
	mainMenu.setOption(5, "Print Head value");
	mainMenu.setOption(6, "Print Tail value");
	mainMenu.setOption(7, "Exit Program");

	cout << "Welcome to my Double-Link Program!";

	bool exitChoice = false;
	string validateInput;
	int menuChoice,
		num;

	DoubleLink linkedList;

	while (!exitChoice)
	{
		cout << endl << endl;
		mainMenu.printPrompt();
		mainMenu.printOptions();
		getline(cin, validateInput);
		menuChoice = getInt(validateInput);

		switch (menuChoice)
		{
		case 1:	// Function 1, add a number to the head of the lsit
			getNum(num);
			linkedList.addHead(num);
			linkedList.printForward();
			break;

		case 2:	// Function 2, add a number to the tail of the list
			getNum(num);
			linkedList.addTail(num);
			linkedList.printForward();
			break;

		case 3:	// Function 3, remove a number from the head of the list
			linkedList.deleteHead();
			linkedList.printForward();
			break;
		case 4:	// Function 4, remove a number from the tail of the list
			linkedList.deleteTail();
			linkedList.printForward();
			break;
		case 5:	// Function 5, write the numbers backwards
			linkedList.printReverse();
			break;
		case 6:	// Extra Credit 1, print the heads value
			linkedList.printHead();
			break;
		case 7:	// Extra Credit 2, print the tails value
			linkedList.printTail();
			break;
		case 8:	// Quit the program
			exitChoice = true;
			break;
		default:
			cout << "Please enter a valid menu choice." << endl;
		}
	}
	return 0;
}