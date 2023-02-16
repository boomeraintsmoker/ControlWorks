all: test_out

test_out: main.o
	g++ main.o -o test_out

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *.o test_out
