
#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
    q->data = (unsigned int*)malloc(size * sizeof(unsigned int));
    q->first = 0;
    q->last = 0;
    q->size = 0;
}

int main()
{
    std::cout << "Hello World!\n";
}