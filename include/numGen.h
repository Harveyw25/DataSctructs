#ifndef NUMGEN_H
#define NUMGEN_H

#include "dynamicArray.h"
#include "linkedList.h"
#include <random>
#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>

class numGen
{
    public:
        numGen(int, int, int);
        void populate(dynamicArray&);
        void populate(linkedList&);
        void populate(dynamicArray&, linkedList&);
        virtual ~numGen();

    protected:

    private:
        std::vector<int> numberList;
};

#endif // NUMGEN_H
