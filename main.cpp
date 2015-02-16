#include <iostream>
#include "DoubleLinkedList.h"


void printMenu();

int main()
{
	DoubleLinkedList<int>* list;
	list->pushFront(1);
	list->pushFront(2);
	list->pushFront(3);
	list->pushBack(4);
	list->pushBack(6);
	list->insertAhead(4,10);
	list->printList();
	
	



	/*
	Node<int>* test = new Node<int>();
	test->setValue(5);
	Node<int>* test2 = new Node<int>();
	test2->setValue(8);
	test2->setPrev(test);
	Node<int>* test3 = test2;
	while(test3!=nullptr)
	{
	cout << test3->getValue() << endl;
	test3 = test3->getPrev();
	}
	*/
	//printMenu();
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
