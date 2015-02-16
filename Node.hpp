template<typename T>
Node<T>::Node()
{
	m_value = T();
	m_previous = nullptr;
	m_next = nullptr;
}
template<typename T>
void Node<T>::setValue(T value)
{
	m_value = value;
}

template<typename T>
T Node<T>::getValue()
{
	return m_value;
}

template<typename T>
void Node<T>::setNext(Node<T>* prev)
{
	m_next = prev;
}

template<typename T>
Node<T>* Node<T>::getNext()
{
	return m_next;
}

template<typename T>
void Node<T>::setPrev(Node<T>* next)
{
	m_previous = next;
}

template<typename T>
Node<T>* Node<T>::getPrev()
{
	return m_previous;
}
