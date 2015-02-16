#ifndef	NODE_H
#define	NODE_H

template<typename T>
class Node
{
	public:
	//initialize next and previous to nullptr
	//initialize m_value to T()
	//assumes that type T has a copy constructor
	Node();

	//sets generic value to m_value
	void setValue(T value);
	//gets generic value m_value
	T getValue();

	//sets generic ptr prev to m_next
	void setNext(Node<T>* prev);
	//gets generic ptr m_next
	Node<T>* getNext();

	//sets generic ptr next to m_previous
	void setPrev(Node<T>* next);
	//gets generic ptr m_previous
	Node<T>* getPrev();
	
	private:
	//value to the node
	T m_value;
	//a pointer back to node
	Node<T>* m_previous;
	//a pointer to another node
	Node<T>* m_next;
	
};

#include "Node.hpp"
#endif

