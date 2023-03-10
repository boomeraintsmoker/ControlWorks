all: itog.out

itog.out: main.o often_used_functions.o steps.o sorts.o quick_n_merge_sorts_time.o
	g++ -g  main.o often_used_functions.o steps.o sorts.o quick_n_merge_sorts_time.o -o itog.out

main.o: main.cpp
	g++ -g -c main.cpp
        
often_used_functions.o: often_used_functions.cpp
	g++ -g  -c often_used_functions.cpp
        
steps.o: steps.cpp
	g++ -g -c steps.cpp

sorts.o: sorts.cpp
	g++ -g -c sorts.cpp
        
quick_n_merge_sorts_time.o: quick_n_merge_sorts_time.cpp
	g++ -g -c quick_n_merge_sorts_time.cpp

clean:
	rm -rf *.o itog.out
