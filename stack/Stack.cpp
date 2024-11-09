#include <iostream>
#include "Stack.h"

// function will add node
Stack* push(Stack* s, int element) 
{
    Stack* newNode = new Stack(element);
    newNode->next = s;
    s = newNode;
    newNode->size += 1;
    return s;
}

// function will delete the last added node
Stack* pop(Stack* s)
{
    if (s == nullptr) // if stack is empty dont pop
    {
        std::cout << "Stack is empty!" << std::endl;
        return nullptr;
    }

    Stack* temp = s;
    s = s->next;


    if (s != nullptr) {
        s->size -= 1;
    }

    delete temp; // delete the old top node
    return s;
}


// check if queue empty
bool isEmpty(Stack* s)
{
    return s->size == 0;
}

// clean the queue
void cleanStack(Stack* s)
{
    while (s != nullptr)
    {
        Stack* temp = s;
        s = s->next;
        delete temp;
    }
}