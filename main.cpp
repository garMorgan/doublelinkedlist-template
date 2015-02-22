#include <iostream>
#include "DoubleLinkedList.h"


void printMenu();

int main()
{
	
	int input = 0;
	int number = 0;
	int newNumber = 0;
	//DoubleLinkedList<int> test;
	DoubleLinkedList<int>* list = new DoubleLinkedList<int>();
	list->pushFront(1);
	list->pushFront(2);
	list->pushFront(3);
	list->pushBack(4);
	list->pushBack(6);
	//list->remove(2);
	//list->insertAhead(4,10);
	
	
	list->printList();
	std::cout << list->size() << std::endl;
	
	do
	{
	printMenu();
	std::cin >> input;	
	switch(input)
		{
		case 1 : std::cout << "Input a value to add: ";
		std::cin >> number;
		list->pushFront(number);
		std::cout << "Adding " << number << " to the list" << std::endl;
		break;

		case 2 : std::cout << "Input a value to add: ";
		std::cin >> number;
		list->pushBack(number);
		std::cout << "Adding " << number << " to the list" << std::endl;
		break;

		case 4 : std::cout << "Give a value to insert: ";
		std::cin >> number;
		std::cout << "Pick a value to insert ahead of in list: ";
		std::cin >> newNumber;
		std::cout << "Attempting to insert " << number << " ahead of " << newNumber << std::endl;
		break;

		case 5 : std::cout << "Give a value to remove " << std::endl;
		std::cout << "You gave ";
		std::cin >> number;
		list->remove(number);
		std::cout << number << " removed from the list" << std::endl;
		break;

		case 6 : std::cout << "Printing list" << std::endl;
		list->printList();
		break;
		
		case 7 : std::cout << "Program ending..." << std::endl;
		break;

		default : std::cout << "Invalid choice" << std::endl;
		}
	
	}while(input!=7);
	
	
	return 0;
}

void printMenu()
{
	std::cout << 	"\n\nMake choice\n"
		<<	"1) push value onto front\n"
		<<	"2) push value onto back\n"
		<<	"3) insert behind a value\n"
		<<	"4) insert ahead of a value\n"
		<<	"5) remove value\n"
		<<	"6) print list\n"
		<<	"7) Quit\n"
		<< 	"Your choice: ";
}
