#include <iostream>
#include "List.h"

using std::cin;
using std::cout;
using std::endl;
int main(void)
{
    // std::cout << "Hello World in C++" << std::endl;
    char *menuSelector = new (std::nothrow) char;
    List myList;
    do
    {
        myList.listMenu();
        cin >> *menuSelector;
    } while (*menuSelector != '6');
}
