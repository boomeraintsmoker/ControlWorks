all: temp_data

temp_data: main.o task0.o
	g++ main.o task0.o -o temp_data

main.o: main.cpp
	g++ -c main.cpp

sort.o: temp0.cpp
	g++ -c sort.cpp

clean:
	rm -rf *.o temp_data
