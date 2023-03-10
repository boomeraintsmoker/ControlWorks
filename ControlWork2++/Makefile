all: a.out

a.out: main.o arraywork.o sorts.o
	g++ -g  main.o arraywork.o sorts.o -o a.out

main.o: main.cpp
	g++ -g -c main.cpp
        
arraywork.o: arraywork.cpp
	g++ -g  -c arraywork.cpp
        
sorts.o: sorts.cpp
	g++ -g -c sorts.cpp
        
clean:
	rm -rf *.o a.out
