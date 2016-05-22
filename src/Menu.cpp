/*
 * Menu.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{

}

void Menu::clearScreen()
{
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

void Menu::pause()
{
	#ifdef _WIN32
	system("pause");
	#else
	system("read -n1 -r -p \"Press any key to continue...\" key");
	#endif
}


bool Menu::validate(int option)
{
	if(option >= 1 && option <= 4)
	{
		return true;
	}else
	{
		cout << "Please pick an option between 1 and 4"<< endl;
		pause();
		return false;
	}
}

void Menu::routeAction(int option)
{
	switch(option)
	{
	case 1:
		listItems();
		break;
	case 2:
		addItems();
		break;
	case 3:
		removeItems();
		break;
	case 4:
		cout << "Thanks for using our software, good bye!" << endl;
	}
	pause();
}

void Menu::listItems()
{
	//TODO: Implement this
	cout << "Implement  Menu::listItems" << endl;
}

void Menu::addItems()
{
	//TODO: Implement this
	cout << "Implement  Menu::addItems" << endl;
}

void Menu::removeItems()
{
	//TODO: Implement this
	cout << "Implement  Menu::removeItems" << endl;
}

void Menu::show()
{
	int option;
	do
	{
		clearScreen();
		cout << "ITLA Shopping List" << endl;
		cout << "1- List items" << endl;
		cout << "2- Add Item" << endl;
		cout << "3- Remove Item" << endl;
		cout << "4- Exit" << endl;
		cout << "Select an option => ";
		cin >> option;
		if(validate(option))
		{
			routeAction(option);
		}
	}while(option !=4);
}
