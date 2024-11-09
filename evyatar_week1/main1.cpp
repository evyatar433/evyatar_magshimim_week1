#include <iostream>
#include "Queue.h"

int main() 
{
    Queue q;
    initQueue(&q, 5);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    std::cout << "dequeued: " << dequeue(&q) << std::endl;
    isEmpty(&q);
    isFull(&q);
    enqueue(&q, 7);
    cleanQueue(&q);
    return 0;
}
