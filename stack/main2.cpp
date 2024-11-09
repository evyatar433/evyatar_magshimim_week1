#include <iostream>
#include "Stack.h"

int main()
{
    Stack* head = nullptr;

    // add some nodes
    head = push(head, 10);
    head = push(head, 20);
    head = push(head, 30);

    // print the numbers
    Stack* current = head;
    while (current != nullptr)
    {
        std::cout << current->element << " ";
        current = current->next;
    }
    std::cout << std::endl;

    // pop one element
    head = pop(head);

    // print the numbers again
    current = head;
    while (current != nullptr)
    {
        std::cout << current->element << " ";
        current = current->next;
    }
    std::cout << std::endl;

    cleanStack(head);
    head = nullptr;

    return 0;
}
