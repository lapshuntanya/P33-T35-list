#include "My-List.h"
#include "DList.h"

int main()
{
    
    DList<int> b;
    b.showList();

    b.push_back(7);
    b.push_back(4);
    b.push_back(9);
    b.push_back(3);
    b.showList();
    b.showReverseList();
    cout << "-------------------\n";
    DNode<int>* item = b.search(-4);
    if (item == nullptr)
        cout << "not found!\n";
    else
        item->show();
}

