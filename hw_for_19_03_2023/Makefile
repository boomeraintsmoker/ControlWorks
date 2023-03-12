all : a.out

a.out : main.o arraywork.o
	g++ -g main.o arraywork.o -o a.out

main.o : main.cpp
	g++ -g -c main.cpp

arraywork.o : arraywork.cpp
	g++ -g -c arraywork.cpp

clean:
	rm -rf *.o a.out
