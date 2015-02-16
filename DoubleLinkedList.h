#ifndef	DOUBLELINKEDLIST_H
#define	DOUBLELINKEDLIST_H
#include "Node.h"
#include <stdexcept>

template<typename T>
class DoubleLinkedList
{
	public:
	//Initialized pointers to nullptr and the size to 0
	DoubleLinkedList();

	//Deallocates all nodes
	~DoubleLinkedList();

	//Returns true if m_size is zero, false otherwise
	//Does not alter the list
	bool isEmpty() const;

	//returns the size of the list
	//Does not alter the list
	int size() const;

	//Puts the value of some type, T, in a node
	//Puts that node at the front of the list
	//Increase m_size by 1
	void pushFront(T value);

	//Puts the value of some type, T, in a node
	//Puts that node at the end of the list
	//Increase m_size by 1
	void pushBack(T value);

	//deletes the node containing the passed value
	//This method is in charge of deleting a node to prevent memory leaks
	//Ensure that m_front is set to the next node in the list
	//If the list has exactly one node, delete it and set the front and back pointers to nullptr
	//returns true if the node was removed, false otherwise
	void remove(T value) throw(std::runtime_error);

	//Assumes listValue is in the list a node is created
	//newValue is placed in it, and the node placed ahead of the first occurance of listValue
	//size increased by 1
	//throws std::exception if listValue isn't in the list
	void insertAhead(T listValue, T newValue) throw(std::runtime_error);

	//Assumes listValue is in the list a node is created
	//newValue is placed in it, and the node placed ahead of the first occurance of listValue
	//size increased by 1
	//throws std::exception if listValue isn't in the list
	void insertBehind(T listValue, T newValue) throw(std::runtime_error);

	//Assumes T is comparable with '=='
	//returns a pointer to the first node in the list (from front to back) that contains the value or nullptr if not found
	Node<T>* find(T value) const;

	//Assumes The type T is overloaded to be printable
	//printed to the screen
	void printList() const;
	
	
	private:
	//A pointer that is that is always looking at the front (first) node 
	Node<T>* m_front;
	//A pointer that is that is always looking at the back (last) node
	Node<T>* m_back;
	//The current size of the list
	int m_size = 0;
};

#include "DoubleLinkedList.hpp"
#endif
