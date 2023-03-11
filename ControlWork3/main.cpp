#include <iostream>
#include <fstream>
#include <vector> 

template<typename T>
bool is_palindrome(T number) {
	std::vector<T> v;
// ------------------------
// split number and push elements to vector     
        while(number != 0) {
		T digits = number % 10;
              	v.push_back(digits);
               	number /= 10;
       	}
// ------------------------
// palindrome - true or false
       	for(int i = 0; i < v.size(); ++i) { 
    		if(v[i] != v[v.size() - 1 - i]) { return false; }
        }
	return true;
}
 
int main(int argc, char** argv) {
	FILE* f;
        int number;
	int count_of_tests = 5; // count of test nums in file
        f = fopen(argv[1], "rt");
	for(int i = 0; i < count_of_tests; i++) {
		fscanf(f, "%d ", &number);
		std::cout << is_palindrome(number) << ' ';
	}
	std::cout << std::endl;
        return 0;
}
