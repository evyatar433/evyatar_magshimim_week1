#ifndef STACK_H
#define STACK_H

struct Stack
{
    int element;
    int size;
    Stack* next;

    Stack(int num) : element(num), next(nullptr) {}
};

// function will add node
Stack* push(Stack* head, int element);

// function will delete the last added node
Stack* pop(Stack* s);

bool isEmpty(Stack* s);

void cleanStack(Stack* s);

#endif // STACK_H