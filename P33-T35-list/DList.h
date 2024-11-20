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


template<typename T>
class DList {
	DNode<T>* head;
	DNode<T>* current;
public:
	DList() { head = current = nullptr; }

	void push_back(T value) {
		//1 Створюємо новий вузол
		DNode<T>* el = new DNode<T>(value);
		if (head == nullptr) { //це перший вузол
			head = el;
			current = el;
		}
		else {//це НЕ перший вузол
			//привязка вузлів
			current->next = el; //зберігаємо адресу нового вузла
			el->prev = current;
			current = el;//оновлення поточного вузла
		}
	}

	void showList() {
		if (head == nullptr) cout << "List is empty\n";
		else {
			Node<T>* p = head;
			while (p != nullptr) {
				p->show();
				p = p->next;
			}
		}
	}
};