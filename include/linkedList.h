#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <iostream>

class linkedList
{
    public:
        linkedList();
        void print();
        int length();
        void insertAtEnd(int);
        void insertAtFront(int);
        void insertAfter(int, int);
        void flip(); //reverse is already taken
        void searchFor(int);
        void removeValue(int);
        void harveySort();
        linkedList duplicate();
        virtual ~linkedList();

    protected:

    private:
        node* head;
};

#endif // LINKEDLIST_H
