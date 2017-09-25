#include "linkedList.h"

linkedList::linkedList()
{
    head = 0;
}

void linkedList::print()
{
    node* temp = head;

    for(int i = 0; i < length(); i++)
    {
        std::cout << temp -> data << std::endl;
        temp = temp -> next;
    }
}

int linkedList::length()
{
    if(head == 0)
    {
        return 0;
    }
    else
    {
        int counter = 1;
        node* temp = head;

        while(temp -> next != 0)
        {
            counter++;
            temp = temp -> next;
        }

        return counter;
    }
}

void linkedList::insertAtEnd(int value)
{
    insertAfter(value, length());
}

void linkedList::insertAtFront(int value)
{
    insertAfter(value, 0);
}

void linkedList::insertAfter(int value, int index)
{
    if(head == 0)
    {
        head = new node(value);
    }
    else if(index == 0)
    {
        node* nodeToAdd = new node(value, head);
        head = nodeToAdd;
    }
    else
    {
        node* temp = head;
        int counter = 0;

        while(counter < index-1 && temp -> next != 0)
        {
            temp = temp -> next;
            counter++;
        }

        node* nodeToAdd = new node(value, temp -> next);
        temp -> next = nodeToAdd;


    }
}

void linkedList::flip()
{
    node* temp = head;
    int originalSize = length();

    for(int i = 0; i < originalSize; i++)
    {
        insertAfter(temp -> data, originalSize);
        temp = temp->next;
    }

    temp = head;

    for(int i = 0; i < originalSize; i++)
    {
        temp = temp -> next;
        delete head;
        head = temp;
    }

}

void linkedList::searchFor(int value)
{
    node* temp = head;
    bool found = false;
    int location;

    for(int i = 0; i < length(); i++)
    {
        if(temp -> data == value)
        {
            found = true;
            location = i;
            i = length();
        }
        temp = temp -> next;
    }

    if(found)
    {
        std::cout << value << " is first found at index " << location << std::endl;
    }
    else
    {
        std::cout << "The value was not found" << std::endl;
    }
}

void linkedList::removeValue(int value)
{
    while(head -> data == value)
    {
        node* deleteMe = head;
        head = head -> next;
        delete deleteMe;
    }

    node* temp = head;

    while(temp -> next != 0)
    {
        if(temp -> next -> data == value)
        {
            node* deleteMe = temp -> next;
            temp -> next = deleteMe -> next;
            delete deleteMe;
        }
        else
        {
            temp = temp -> next;
        }
    }
}

/*
I believe that variable names and function sizes should
be created so that comments are obsolete. I try to follow
this rule; however, what you are about to see is what I
believe to be one of the worst sorting algorithms ever
implemented. It is a strictly worse Bubble Sort. In fact,
it is so bad I can't find an actual name for it. Ladies
and gentlemen, I present to you: Harvey Sort.
*/

void linkedList::harveySort()
{
    head = new node(0, head); //Dummy head. Otherwise element 0 will never be looked at.
    node* temp = head;

    while(temp -> next -> next != 0)
    {
        if(temp -> next -> data > temp -> next -> next -> data)
        {
            //Basically, if element n > n+1, swap their positions and start at the beginning
            node* nodeToMove = temp -> next -> next;
            temp -> next -> next = temp -> next -> next -> next;
            nodeToMove -> next = temp -> next;
            temp -> next = nodeToMove;

            temp = head;
        }
        else
        {
            temp = temp -> next;
        }
    }

    head = head -> next; //delete dummy head.

}

linkedList linkedList::duplicate()
{
    linkedList newList = linkedList();
    node* temp = head;

    for(int i = 0; i < length(); i++)
    {
        newList.insertAtEnd(temp -> data);
        temp = temp -> next;
    }

    return newList;
}

linkedList::~linkedList()
{
    node* temp = head;

    for(int i = 0; i < length(); i++)
    {
        temp = temp -> next;
        delete head;
        head = temp;
    }
}
