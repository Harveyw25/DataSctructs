#include "dynamicArray.h"

dynamicArray::dynamicArray()
{
    array = 0;
    size = 0;
    maxSize = 0;
}

void dynamicArray::print()
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

int dynamicArray::length()
{
    return size;
}

void dynamicArray::insertAtEnd(int value)
{
    insertAfter(value, size);
}

void dynamicArray::insertAtFront(int value)
{
    insertAfter(value, 0);
}

void dynamicArray::insertAfter(int value, int position)
{
    if(position > size)
    {
        position = size;
    }

    if(maxSize == 0)
    {
        maxSize = 1;
        array = new int[1];
    }

    if(size+1 == maxSize)
    {
        doubleSize();
    }

    int temp;
    int dataToMove = array[position];

    array[position] = value;
    size++;

    for(int i = position + 1; i < size; i++)
    {
        temp = array[i];
        array[i] = dataToMove;
        dataToMove = temp;
    }

    array[size] = dataToMove;
}

void dynamicArray::flip()
{
    for(int i = 0; i < size/2; i++)
    {
        int temp = array[i];
        array[i] = array[(size - 1) - i];
        array[(size - 1) - i] = temp;
    }
}

void dynamicArray::searchFor(int value)
{
    bool found = false;
    int location = 0;

    while(!found && location < size)
    {
        if(array[location] == value)
        {
            found = true;
            break;
        }
        location++;
    }

    if(found)
    {
        std::cout << "The value " << value << " was found at index " << location << std::endl;
    }
    else
    {
        std::cout << value << " was not found" << std::endl;
    }
}

void dynamicArray::removeValue(int value)
{
    int i = 0;

    while(i < size)
    {
        if(array[i] == value)
        {
            for(int j = i; j < size - 1; j++)
            {
                array[j] = array[j + 1];
            }
            i--;
            size--;
        }
        i++;
    }
}

void dynamicArray::sorter()
{
    bool finished = false;

    while(!finished)
    {
        finished = true;
        for(int i = 0; i < size - 1; i++)
        {
            if(array[i] > array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                finished = false;
            }
        }
    }
}

dynamicArray dynamicArray::duplicate()
{
    dynamicArray newArray = dynamicArray();

    for(int i = 0; i < size; i++)
    {
        newArray.insertAtEnd(array[i]);
    }

    return newArray;
}

void dynamicArray::doubleSize()
{
    maxSize = maxSize*2;
    int* temp = new int[maxSize];

    for(int i = 0; i < size; i++)
    {
        temp[i] = array[i];
    }

    delete array;
    array = temp;
}

dynamicArray::~dynamicArray()
{
    delete array;
}
