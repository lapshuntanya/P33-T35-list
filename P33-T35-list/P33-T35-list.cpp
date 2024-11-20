#include "My-List.h"
#include "DList.h"
#include <list>
#include <string>

int main()
{
    std::list<std::string> p33;
    p33.push_back("Yaroslav");
    p33.push_back("Andriy");
    p33.push_back("Stepan");
    p33.push_back("Ivan");
    p33.push_back("Kyrylo");

    std::list<std::string>::iterator p;
    for (p = p33.begin(); p != p33.end(); p++)
    {
        cout << *p << " ";
    }cout << endl;

    p33.sort(); 
    for (auto item : p33) {
        cout << item << " ";
    }cout << endl;
   
}

