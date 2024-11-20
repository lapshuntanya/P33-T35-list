#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace MyList {

	template<typename T>
	class Node {
	public:
		T info;
		Node* next;

		Node(T value) { info = value; next = nullptr; }
		void show()const {
			cout << "info: " << info << endl;
			cout << "\tnext: " << next << endl;
		}
	};
}