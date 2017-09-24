#include <iostream>
#include "linkedList.h"
#include "timer.h"
#include "dynamicArray.h"

int main(){

    dynamicArray a = dynamicArray();

    a.insertAtEnd(2);
    a.insertAtEnd(6);
    a.insertAtEnd(3);
    a.insertAtEnd(1);
    a.insertAtEnd(4);


    a.sorter();
    a.print();

	return 0;
}
