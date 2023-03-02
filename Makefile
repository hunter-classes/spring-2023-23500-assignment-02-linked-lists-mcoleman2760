main: main.o list.o node.o
	g++ -o main main.o list.o mode.o

main.o: main.cpp list.h node.h

list.o: list.cpp list.h node.h

node.o: node.cpp node.h

clean:
	rm -f *.o
