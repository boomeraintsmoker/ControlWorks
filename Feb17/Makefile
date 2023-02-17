all: test_out

test_out: main.o often_used_functions.o steps.o sorts.o
	g++ -g  main.o often_used_functions.o steps.o sorts.o -o test_out

main.o: main.cpp
	g++ -g -c main.cpp
        
often_used_functions.o: often_used_functions.cpp
	g++ -g  -c often_used_functions.cpp
        
steps.o: steps.cpp
	g++ -g -c steps.cpp

sorts.o: sorts.cpp
	g++ -g -c sorts.cpp

clean:
	rm -rf *.o test_out
