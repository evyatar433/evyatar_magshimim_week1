#include <iostream>

#include "Queue.h"

// init the queue
void initQueue(Queue* q, unsigned int size) 
{
    q->data = new int[size];
    q->first = 0;
    q->last = 0;
    q->size = 0;
    q->max = size;
}
// clean the queue
void cleanQueue(Queue* q) 
{
    delete[] q->data;  // free the memory
    q->data = nullptr;
    q->first = 0;
    q->last = 0;
    q->size = 0;
}
// add somthing to the queue
void enqueue(Queue* q, unsigned int newValue) 
{
    if (q->size == q->max) 
    {
        std::cout << "Queue is full!" << std::endl;
        return;
    }
    q->data[q->last] = newValue;
    q->last = (q->last + 1) % q->max;
    q->size++;
}

// remove somthing from the queue
int dequeue(Queue* q) 
{
    if (q->size == 0) 
    {
        std::cout << "queue is empty" << std::endl;
        return -1;  
    }
    int value = q->data[q->first];
    q->first = (q->first + 1) % q->max;

    q->size--;
    return value;
}

// check if queue empty
bool isEmpty(Queue* q) 
{
    return q->size == 0;
}

// check if queue full
bool isFull(Queue* q) 
{
    return q->size == q->max;
}

