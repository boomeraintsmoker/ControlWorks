#include <iostream>

struct Goods {
	int id;
	char* name;
	double cost;
// ---------------------
	Goods(int _id, char* _name, double _cost): id(_id), name(_name), cost(_cost) {
		_id   = 0;
		_name = nullptr;
		_cost = 0.0;	
	}
/*	~Goods() {
		if(id != 0 || name != nullptr || cost != 0.0) {
			id   = 0;
			name = nullptr;
			cost = 0.0;
		}
	}; */
};

struct Element {
	Goods* item;
	Element* prev;
// ---------------------
	Element() {
		prev = nullptr; 
	}
	~Element() {}	
};

class Filo : Element {
	Element* head;
// --------------------
public:
	Filo() {
		head = nullptr;
	}
	~Filo() {}
// -------------------
	void push(Goods cur_item) {
		Element* temp = new Element();
		if(head == nullptr) {
			temp->item = &cur_item;
			head = new Element();
			head = temp;
			return;
		}
		temp->item = &cur_item;
		prev = head;
		head = prev;
		std::cout << 1 << std::endl;
	}
};

int main() {
	Filo stack;
	Goods* el1= new Goods(1, "a", 1.0);
	stack.push(*el1);
	Goods* el2 = new Goods(2, "b", 2.0);
	stack.push(*el2);
	return 0;
}
