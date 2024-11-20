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


	template<typename T>
	class List {
		Node<T>* head;
		Node<T>* current;
	public:
		List() { head = current = nullptr; }

		void push_back(T value) {
			//1 Створюємо новий вузол
			Node<T>* el = new Node<T>(value);
			if (head == nullptr) { //це перший вузол
				head = el;
				current = el;
			}
			else {//це НЕ перший вузол
				//привязка вузлів
				current->next = el; //зберігаємо адресу нового вузла
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
}