#include "My-List.h"

int main()
{
    // 7 3 9 4
    using namespace MyList;

    Node<int> first(7); //info=7, next=nullptr

    Node<int> second(3); //info=3, next=nullptr
    first.next = &second;

    Node<int> third(9);//info=9, next=nullptr
    second.next = &third;

    Node<int> fourth(4);//info=4, next=nullptr
    third.next = &fourth;

    //------------------------------------------
    Node<int>* p = &first;
    while (p != nullptr) {
        p->show();
        p = p->next;
    }
}

