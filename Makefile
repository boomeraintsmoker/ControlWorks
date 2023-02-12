all: a.out

a.out: main.o task0.o task1.o task2.o task3.o
	g++ main.o task0.o task1.o task2.o task3.o -o a.out

main.o: main.cpp	
	g++ -c main.cpp
    
task0.o: task0.cpp
	g++ -c task0.cpp

task1.o: task1.cpp
	g++ -c task1.cpp

task2.o: task2.cpp
	g++ -c task2.cpp
        
task3.o: task3.cpp
	g++ -c task3.cpp
        
clean: 
	rm -rf *.o a.out

