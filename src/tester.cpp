#include "tester.h"

tester::tester()
{
    time = timer();
}

void tester::test(int inputSize, int numberOfTests)
{
    timeValues results;

    std::cout << "Input size of  " << inputSize << '\n' << std::endl;

    std::cout << "Insert At End:" << std::endl;
    results = insertAtEnd(inputSize);
    std::cout << "Dynamic Array: " << results.dynamicArray.count() << std::endl;
    std::cout << "Linked List: " << results.linkedList.count() << '\n' << std::endl;

    std::cout << "Insert At Front:" << std::endl;
    results = insertAtFront(inputSize);
    std::cout << "Dynamic Array: " << results.dynamicArray.count() << std::endl;
    std::cout << "Linked List: " << results.linkedList.count() << '\n' << std::endl;

    std::cout << "Insert After " << inputSize/2 << ":" << std::endl;
    results = insertAfter(inputSize);
    std::cout << "Dynamic Array: " << results.dynamicArray.count() << std::endl;
    std::cout << "Linked List: " << results.linkedList.count() << '\n' << std::endl;

    std::cout << "Flip: " << std::endl;
    results = flip(inputSize);
    std::cout << "Dynamic Array: " << results.dynamicArray.count() << std::endl;
    std::cout << "Linked List: " << results.linkedList.count() << '\n' << std::endl;

    std::cout << "Searching for 50: " << std::endl;
    results = searchFor(inputSize);
    std::cout << "Dynamic Array: " << results.dynamicArray.count() << std::endl;
    std::cout << "Linked List: " << results.linkedList.count() << '\n' << std::endl;

    std::cout << "Removing value 50: " << std::endl;
    results = removeValue(inputSize);
    std::cout << "Dynamic Array: " << results.dynamicArray.count() << std::endl;
    std::cout << "Linked List: " << results.linkedList.count() << '\n' << std::endl;

    //std::cout << "Sorting: " << std::endl;
    //results = sorter(inputSize);
    //std::cout << "Dynamic Array: " << results.dynamicArray.count() << std::endl;
    //std::cout << "Linked List: " << results.linkedList.count() << '\n' << std::endl;

    std::cout << "Duplication: " << std::endl;
    results = duplicate(inputSize);
    std::cout << "Dynamic Array: " << results.dynamicArray.count() << std::endl;
    std::cout << "Linked List: " << results.linkedList.count() << '\n' << std::endl;
}

timeValues tester::insertAtEnd(int inputSize)
{
    timeValues results;
    dynamicArray array;
    linkedList list;
    numGen numberGen = numGen(0, 100, inputSize);
    numberGen.populate(array, list);

    time.start();
    array.insertAtEnd(0);
    time.stop();
    results.dynamicArray = time.print();

    time.start();
    list.insertAtEnd(0);
    time.stop();
    results.linkedList = time.print();

    return results;
}

timeValues tester::insertAtFront(int inputSize)
{
    timeValues results;
    dynamicArray array;
    linkedList list;
    numGen numberGen = numGen(0, 100, inputSize);
    numberGen.populate(array, list);

    time.start();
    array.insertAtFront(0);
    time.stop();
    results.dynamicArray = time.print();

    time.start();
    list.insertAtFront(0);
    time.stop();
    results.linkedList = time.print();

    return results;
}

timeValues tester::insertAfter(int inputSize)
{
    timeValues results;
    dynamicArray array;
    linkedList list;
    numGen numberGen = numGen(0, 100, inputSize);
    numberGen.populate(array, list);

    time.start();
    array.insertAfter(0, inputSize/2);
    time.stop();
    results.dynamicArray = time.print();

    time.start();
    list.insertAfter(0, inputSize/2);
    time.stop();
    results.linkedList = time.print();

    return results;
}

timeValues tester::flip(int inputSize)
{
    timeValues results;
    dynamicArray array;
    linkedList list;
    numGen numberGen = numGen(0, 100, inputSize);
    numberGen.populate(array, list);

    time.start();
    array.flip();
    time.stop();
    results.dynamicArray = time.print();

    time.start();
    list.flip();
    time.stop();
    results.linkedList = time.print();

    return results;
}

timeValues tester::searchFor(int inputSize)
{
    timeValues results;
    dynamicArray array;
    linkedList list;
    numGen numberGen = numGen(0, 100, inputSize);
    numberGen.populate(array, list);

    time.start();
    array.searchFor(50);
    time.stop();
    results.dynamicArray = time.print();

    time.start();
    list.searchFor(50);
    time.stop();
    results.linkedList = time.print();

    return results;
}

timeValues tester::removeValue(int inputSize)
{
    timeValues results;
    dynamicArray array;
    linkedList list;
    numGen numberGen = numGen(0, 100, inputSize);
    numberGen.populate(array, list);

    time.start();
    array.removeValue(50);
    time.stop();
    results.dynamicArray = time.print();

    time.start();
    list.removeValue(50);
    time.stop();
    results.linkedList = time.print();

    return results;
}

timeValues tester::sorter(int inputSize)
{
    timeValues results;
    dynamicArray array;
    linkedList list;
    numGen numberGen = numGen(0, 100, inputSize);
    numberGen.populate(array, list);

    time.start();
    array.sorter();
    time.stop();
    results.dynamicArray = time.print();

    time.start();
    list.harveySort();
    time.stop();
    results.linkedList = time.print();

    return results;
}

timeValues tester::duplicate(int inputSize)
{
    timeValues results;
    dynamicArray array;
    linkedList list;
    numGen numberGen = numGen(0, 100, inputSize);
    numberGen.populate(array, list);

    time.start();
    array.duplicate();
    time.stop();
    results.dynamicArray = time.print();

    time.start();
    list.duplicate();
    time.stop();
    results.linkedList = time.print();

    return results;
}



tester::~tester()
{

}
