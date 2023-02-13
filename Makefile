all: all_control

all_control: main.o task1.o task2.o task3.o often_used_functions.o tester.o
	g++ main.o task1.o task2.o task3.o often_used_functions.o tester.o -o all_control

main.o: main.cpp	
	g++ -c main.cpp

task1.o: task1.cpp
	g++ -c task1.cpp

task2.o: task2.cpp
	g++ -c task2.cpp
        
task3.o: task3.cpp
	g++ -c task3.cpp

often_used_functions.o: often_used_functions.cpp
	g++ -c often_used_functions.cpp

tester.o: tester.cpp
	g++ -c tester.cpp
        
clean: 
	rm -rf *.o a.out
