#include <iostream>

struct Queue {
    int* data; // queue data
    int first; // first queue object
    int last; // last queue object
    unsigned int size;  //size of queue
    unsigned int max;  // maximum size of the queue
};

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
        std::cout << "Queue is empty!" << std::endl;
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

//check if queue full
bool isFull(Queue* q) 
{
    return q->size == q->max;
}

int main() 
{
    Queue q;
    initQueue(&q, 5);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    std::cout << "Dequeued: " << dequeue(&q) << std::endl; // 10


    enqueue(&q, 7);  // queue is full!

    cleanQueue(&q);  // delete memory and reset the queue
    return 0;
}
