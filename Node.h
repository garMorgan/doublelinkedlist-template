/**
*	@file : Node.h
*	@author :  Garion Morgan
*	@date : 2015.02.25
*	Purpose: create all my methods for my Node file
*/
#ifndef	NODE_H
#define	NODE_H

template<typename T>
class Node
{
	public:
	/**
	*  @pre initialize next and previous to nullptr
	*  @post initialize m_value to T()
	*  @return assumes that type T has a copy constructor
	*/
	Node();
	/**
	*  @pre new value
	*  @post sets value
	*  @return sets generic value to m_value
	*/
	void setValue(T value);
	/**
	*  @pre set_value
	*  @post m_value
	*  @return gets generic value m_value
	*/
	T getValue();
	/**
	*  @pre none
	*  @post sets next ptr
	*  @return sets generic ptr prev to m_next
	*/
	void setNext(Node<T>* prev);
	/**
	*  @pre set nextptr
	*  @post get next ptr
	*  @return gets generic ptr m_next
	*/
	Node<T>* getNext();
	/**
	*  @pre none
	*  @post setprev ptr
	*  @return sets generic ptr next to m_previous
	*/
	void setPrev(Node<T>* next);
	/**
	*  @pre set prev ptr
	*  @post get prev ptr
	*  @return gets generic ptr m_previous
	*/
	Node<T>* getPrev();
	
	private:
	/**
	*  @pre none
	*  @post value to the node
	*  @return value to the node
	*/
	T m_value;
	/**
	*  @pre none
	*  @post a pointer back to node
	*  @return a pointer back to node
	*/
	Node<T>* m_previous;
	/**
	*  @pre none
	*  @post a pointer to another node
	*  @return a pointer to another node
	*/
	Node<T>* m_next;
	
};

#include "Node.hpp"
#endif

