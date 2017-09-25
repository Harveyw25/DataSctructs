#ifndef TESTER_H
#define TESTER_H

#include "timer.h"
#include "numGen.h"
#include "dynamicArray.h"
#include "linkedList.h"
#include "iostream"

struct timeValues
{
    std::chrono::duration<double> linkedList;
    std::chrono::duration<double> dynamicArray;
};

class tester
{
    public:
        tester();
        void test(int, int);
        virtual ~tester();

    protected:

    private:
        timer time;

        timeValues insertAtEnd(int);
        timeValues insertAtFront(int);
        timeValues insertAfter(int); //in order to test accurately we will insert after half of the items.
        timeValues flip(int);
        timeValues searchFor(int); //50
        timeValues removeValue(int); //50
        timeValues sorter(int);
        timeValues duplicate(int);
};

#endif // TESTER_H
