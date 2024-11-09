#ifndef STACK_H
#define STACK_H

struct Stack
{
    int number;
    Stack* next;

    Stack(int num) : number(num), next(nullptr) {}
};


Stack* push(Stack* head, int number) {
    Stack* newNode = new Stack(number);
    newNode->next = head;
    head = newNode;
    return head;
}

// Function to add a node at the beginning of the list
Stack* push(Stack* head, int number);


//int pop(Stack* s); // Return -1 if stack is empty
//
//void initStack(Stack* s);
//void cleanStack(Stack* s);
//
//bool isEmpty(Stack* s);
//bool isFull(Stack* s);

#endif // STACK_H