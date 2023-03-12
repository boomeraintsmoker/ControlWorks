#include <iostream>

class Filo {
	struct Element;
	Element* first;
public:
	Filo(Element* _first);
	~Filo();
	void push(int value);
	void pop();
	void peek();
	bool is_empty();
	int size();
};

struct Filo::Element {
	int value;
	Element* el;	
};

Filo::Filo(Element* _first = nullptr): first(_first)  {
	
}

Filo::~Filo() {
	
}

void Filo::push(int value) {
	if(first == nullptr) {
		first->value = value;
	}
}

int main() {
	Filo stack;
	stack.push(3);
	return 0;
}
