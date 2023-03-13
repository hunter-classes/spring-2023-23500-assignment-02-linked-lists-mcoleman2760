main: main.o List.o Node.o OList.o
	g++ -o main main.o List.o Node.o OList.o

tests: tests.o OList.o Node.o List.o 
	g++ -o tests tests.o OList.o Node.o List.o

main.o: main.cpp List.h Node.h

tests.o: tests.cpp OList.h Node.h List.h

List.o: List.cpp List.h Node.h

Mode.o: Node.cpp Node.h

OList.o: OList.cpp OList.h Node.h

clean:
	rm -f *.o
