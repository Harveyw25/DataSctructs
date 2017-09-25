#include "numGen.h"

numGen::numGen(int lowerBound, int higherBound, int numberOfEntities)
{
    srand(time(NULL));

    for(int i = 0; i < numberOfEntities; i++)
    {
            numberList.push_back(rand() % higherBound + lowerBound);
    }
}

void numGen::populate(dynamicArray &array)
{
    for(int i = 0; i < numberList.size(); i++)
    {
        array.insertAtEnd(numberList.at(i));
    }
}

void numGen::populate(linkedList &list)
{
    for(int i = 0; i < numberList.size(); i++)
    {
        list.insertAtEnd(numberList.at(i));
    }
}

numGen::~numGen()
{

}
