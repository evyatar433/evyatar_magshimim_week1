#include <iostream>
#include "Stack.h"

// function will create a node
Stack* push(Stack* head, int number)
{
    Stack* newNode = new Stack(number);
    newNode->next = head;
    head = newNode;
    return head;
}


//int pop(Stack* s)
//{
//    return 0;
//}
//
//void initStack(Stack* s)
//{
//    std::cout << 22;
//}
//void cleanStack(Stack* s)
//{
//    std::cout << 22;
//}
//bool isEmpty(Stack* s)
//{
//	return 0;
//}
//bool isFull(Stack* s)
//{
//	return 0;
//}
