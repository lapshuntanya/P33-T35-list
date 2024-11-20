#pragma once
#include <iostream>
using std::cout;
using std::endl;

template<typename T>
class DNode {
public:
	T info;
	DNode* prev;
	DNode* next;

	DNode(T value) { info = value; next = prev = nullptr; }
	void show()const {
		cout << "info: " << info << endl;
		cout << "\tprev: " << prev << endl;
		cout << "\tnext: " << next << endl;
	}
};
