all: res_task2_3

res_task2_3: main.o task2.o	
	g++ main.o task2.o -o res_task2_3
    
main.o: main.cpp
	g++ -c main.cpp
    
task2.o: task2.cpp
	g++ -c task2.cpp
   
clear: 
	rm -rf *.o res_task2_3

