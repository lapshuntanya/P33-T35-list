#include "My-List.h"
#include "DList.h"

int main()
{
    //// 7 3 9 4
    //using namespace MyList;
    //Node<int> first(7); //info=7, next=nullptr
    //Node<int> second(3); //info=3, next=nullptr
    //first.next = &second;
    //Node<int> third(9);//info=9, next=nullptr
    //second.next = &third;
    //Node<int> fourth(4);//info=4, next=nullptr
    //third.next = &fourth;
    ////------------------------------------------
    //Node<int>* p = &first;
    //while (p != nullptr) {
    //    p->show();
    //    p = p->next;
    //}

    /*
    MyList::List<int> a;
    a.showList();

    a.push_back(9);
    a.push_back(3);
    a.push_back(7);
    a.push_back(4);
    a.showList();*/

    /*DNode<int> first(7);

    DNode<int> second(3);
    first.next = &second;
    second.prev = &first;

    DNode<int> third(4);
    second.next = &third;
    third.prev = &second;

    DNode<int> fourth(9);
    third.next = &fourth;
    fourth.prev = &third;
   
    // Вивести в прямому //7 3 4 9
    DNode<int>* p = &first;
    while (p != nullptr) { cout << p->info; p = p->next; }

    //та зворотньому порядку //9 4 3 7
    p = &fourth;
    while (p != nullptr) { cout << p->info; p = p->prev; } */
    

}

