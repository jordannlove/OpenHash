Lab2: main.o Exec.o Hash.o LinkedList.o Node.o
	g++ -std=c++11 main.o Exec.o Hash.o LinkedList.o Node.o -o Lab2

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Exec.o: Exec.cpp Exec.h
	g++ -std=c++11 -c Exec.cpp

Hash.o: Hash.cpp Hash.h
	g++ -std=c++11 -c Hash.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -std=c++11 -c LinkedList.cpp

Node.o: Node.cpp Node.h
	g++ -std=c++11 -c Node.cpp

clean:
	rm -f Lab2 *.o
