#include "List.h"
#include <iostream>

int main() {
    List myList;

    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);
    myList.append(4);

    std::cout << "Linked List: ";
    myList.display();

    return 0;
}
