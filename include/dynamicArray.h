#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <iostream>

class dynamicArray
{
    public:
        dynamicArray();
        void print();
        int length();
        void insertAtEnd(int);
        void insertAtFront(int);
        void insertAfter(int, int);
        void flip(); //reverse
        void searchFor(int);
        void removeValue(int);
        void sorter();
        dynamicArray duplicate();
        void doubleSize();
        virtual ~dynamicArray();

    protected:

    private:
        int* array;
        int size;
        int maxSize;
};

#endif // DYNAMICARRAY_H
