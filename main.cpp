#include <iostream>
#include "linkedList.h"

int main(){

    linkedList l = linkedList();

    l.insertAfter(6, 0);
    l.insertAfter(2, 2);
    l.insertAfter(3, 3);
    l.insertAfter(22, 4);
    l.insertAfter(5, 5);
    l.insertAfter(1, 1);
    l.harveySort();
    l.print();

	return 0;
}
