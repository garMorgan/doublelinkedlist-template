/**
*	@file : DoubleLinkedList.h
*	@author :  Garion Morgan
*	@date : 2015.02.25
*	Purpose: creating all methods for dll
*/
#ifndef	DOUBLELINKEDLIST_H
#define	DOUBLELINKEDLIST_H
#include <iostream>
#include "Node.h"
#include <stdexcept>

template<typename T>
class DoubleLinkedList
{
	public:
	/**
	*  @pre none
	*  @post Initialized pointers to nullptr and the size to 0
	*  @return Initialized pointers to nullptr and the size to 0
	*/
	DoubleLinkedList();
	/**
	*  @pre DLL()
	*  @post Deallocates all nodes
	*  @return Deallocates all nodes
	*/
	~DoubleLinkedList();
	/**
	*  @pre size
	*  @post Does not alter the list
	*  @return Returns true if m_size is zero, false otherwise
	*/
	bool isEmpty() const;
	/**
	*  @pre m_size
	*  @post Does not alter the list
	*  @return returns the size of the list
	*/
	int size() const;
	/**
	*  @pre Puts the value of some type, T, in a node
	*  @post Puts that node at the front of the list
	*  @return Increase m_size by 1
	*/
	void pushFront(T value);
	/**
	*  @pre Puts the value of some type, T, in a node
	*  @post Increase m_size by 1
	*  @return Puts that node at the end of the list
	*/
	void pushBack(T value);
	/**
	*  @pre Ensure that m_front is set to the next node in the list
	*  @post deletes the node containing the passed value
	*  @return If the list has exactly one node, delete it and set the front and back pointers to nullptr
	*/
	void remove(T value) throw(std::runtime_error);
	/**
	*  @pre throws std::exception if listValue isn't in the list
	*  @post Assumes listValue is in the list a node is created
	*  @return newValue is placed in it, and the node placed ahead of the first occurance of listValue
	*/
	void insertAhead(T listValue, T newValue) throw(std::runtime_error);
	/**
	*  @pre throws std::exception if listValue isn't in the list
	*  @post Assumes listValue is in the list a node is created
	*  @return newValue is placed in it, and the node placed ahead of the first occurance of listValue
	*/
	void insertBehind(T listValue, T newValue) throw(std::runtime_error);
	/**
	*  @pre value
	*  @post Assumes T is comparable with '=='
	*  @return returns a pointer to the first node in the list (from front to back) that contains the value or nullptr if not found
	*/
	Node<T>* find(T value) const;
	/**
	*  @pre list
	*  @post Assumes The type T is overloaded to be printable
	*  @return printed to the screen
	*/
	void printList() const;
	
	
	private:
	/**
	*  @pre nullptr
	*  @post A pointer that is that is always looking at the front (first) node
	*  @return A pointer that is that is always looking at the front (first) node
	*/
	Node<T>* m_front;
	/**
	*  @pre nullptr
	*  @post A pointer that is that is always looking at the back (last) node
	*  @return A pointer that is that is always looking at the back (last) node
	*/
	Node<T>* m_back;
	/**
	*  @pre The current size of the list
	*  @post The current size of the list
	*  @return The current size of the list
	*/
	int m_size;
};

#include "DoubleLinkedList.hpp"
#endif
