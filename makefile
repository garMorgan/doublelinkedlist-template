lab3: main.o
	g++ -std=c++11 -g main.o -o lab3
main.o: main.cpp Node.h Node.hpp DoubleLinkedList.h DoubleLinkedList.hpp
	g++ -std=c++11 -g -c main.cpp

clean:
	rm *.o lab3
	clean done

