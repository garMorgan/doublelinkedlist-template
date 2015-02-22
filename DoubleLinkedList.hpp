template<typename T>
DoubleLinkedList<T>::DoubleLinkedList()
{
	m_front = nullptr;
	m_back = nullptr;
	m_size = 0;
}
template<typename T>
DoubleLinkedList<T>::~DoubleLinkedList()
{

}
template<typename T>
bool DoubleLinkedList<T>::isEmpty() const
{
	//std::cout << m_size << std::endl;
	if(m_size==0)
	{
	return true;
	}
	else
	{
	return false;
	}
}
template<typename T>
int DoubleLinkedList<T>::size() const
{
	return m_size;
}
template<typename T>
void DoubleLinkedList<T>::pushFront(T value)
{
	if(isEmpty())
	{
	std::cout << "emotycheck" << std::endl;
	Node<T>* temp = new Node<T>();
	temp->setValue(value);
	m_back=temp;
	m_front=temp;
	m_size++;
	}
	else
	{
	std::cout << "pushfrontcheck" << std::endl;
	Node<T>* temp = new Node<T>();
	temp->setValue(value);
	m_front->setPrev(temp);
	temp->setNext(m_front);
	m_front=temp;
	m_size++;
	}
}
template<typename T>
void DoubleLinkedList<T>::pushBack(T value)
{
	if(isEmpty())
	{
	pushFront(value);
	m_size++;
	}
	else
	{
	Node<T>* temp = new Node<T>();
	temp->setValue(value);
	m_back->setNext(temp);
	temp->setPrev(m_back);
	m_back=temp;
	m_size++;
	}
}
template<typename T>
void DoubleLinkedList<T>::remove(T value) throw(std::runtime_error)
{
	Node<T>* tempFront;
	Node<T>* tempBack;
	Node<T>* temp = new Node<T>();
	temp = m_front;
	try
	{
		while(temp->getNext()!=nullptr)
		{
		if(temp->getValue()==value)
		{
			if(temp==m_front)
			{
			m_front=m_front->getNext();
			m_size--;
			break;
			}
			
		}	
		else if(temp->getValue()==value)
			{
			tempFront= temp->getPrev();
			tempBack = temp->getNext();
			tempFront->setNext(tempBack);
			tempBack->setPrev(tempFront);
			m_size--;
			break;
			}
			else
			{
			temp=temp->getNext();
			}
		}
			if(temp->getValue()==value)
			{
			tempFront= temp->getPrev();
			tempBack = temp->getNext();
			tempFront->setNext(tempBack);
			m_back=tempBack;
			m_size--;
			}
			else
			{
			throw;
			}
			
	}
	catch(std::runtime_error& e)
	{
	std::cout << e.what() << std::endl;
	}
	delete temp;
}
template<typename T>
void DoubleLinkedList<T>::insertAhead(T listValue, T newValue) throw(std::runtime_error)
{
	Node<T>* tempNext;
	Node<T>* tempPrev;
	Node<T>* temp;
	Node<T>* tempAdd = new Node<T>();
	temp = m_front;
	try
	{
		while(temp->getNext()!=nullptr)
		{
		if(temp->getValue()==listValue)
		{
			if(temp==m_front)
			{
			pushFront(newValue);
			break;
			}
			
		}	
		else if(temp->getValue()==listValue)
			{
			std::cout << "boom" << std::endl;
			tempNext= temp->getNext();
			tempPrev = temp->getPrev();
			tempAdd->setValue(newValue);
			tempPrev->setNext(tempAdd);
			temp->setPrev(tempAdd);
			tempAdd->setPrev(tempPrev);
			tempAdd->setNext(temp);
			std::cout << "boom" << std::endl;
			break;
			}
			else
			{
			std::cout << "change value" << std::endl;
			temp=temp->getNext();
			}
		}
			if(temp->getValue()==listValue)
			{
			tempNext= temp->getNext();
			tempPrev = temp->getPrev();
			tempAdd->setValue(newValue);
			tempPrev->setNext(tempAdd);
			temp->setPrev(tempAdd);
			tempAdd->setPrev(tempPrev);
			tempAdd->setNext(temp);
			}
			else
			{
			throw;
			}
			
	}
	catch(std::runtime_error& e)
	{
	std::cout << e.what() << std::endl;
	}
}
template<typename T>
Node<T>* DoubleLinkedList<T>::find(T value) const
{
/*
	Node<T>* temp = new Node<T>();
	temp = m_front;
		while(temp->getNext()!=nullptr)
		{
		if(temp->getValue()==value)
		{
			if(temp==m_front)
			{
			return temp;
			break;
			}
			
		}	
		else if(temp->getValue()==value)
			{
			return temp;
			break;
			}
			else
			{
			temp=temp->getNext();
			}
		}
			if(temp->getValue()==value)
			{
			return temp;
			}
		*/
}
template<typename T>
void DoubleLinkedList<T>::printList() const
{
	Node<T>* print;
	print = m_front;
	if(isEmpty())
	{
	std::cout << "List is empty" << std::endl;
	}
	else
	{
	while(print->getNext()!=nullptr)
		{
		std::cout << print->getValue() << " ";
		print = print->getNext();
		}
	std::cout << print->getValue() << std::endl;
	}
}
