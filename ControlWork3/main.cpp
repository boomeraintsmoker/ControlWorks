#include <iostream>
#include <fstream>
#include <vector>

bool is_palindrom(int num) {
	std::vector<int> v;
// ------------------------	
	while(num != 0) {
		int digits = num % 10;
		v.push_back(digits);
		num /= 10;
	}
// ------------------------
	for(int i = 0; i < v.size(); ++i) {
		if(v[i] != v[v.size() - 1 - i]) { return false;	}
		return true;
	}
}

int main(int argc, char** argv) {
	int num;
	FILE* f;
	f = fopen(argv[1], "rt");
	fscanf(f, "%d", &num);
	std::cout << is_palindrom(num) << std::endl;
	return 0;
}
