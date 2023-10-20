#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List {
private:
    Node* head;

public:
    List();
    void append(int value);
    void display();
};

#endif
