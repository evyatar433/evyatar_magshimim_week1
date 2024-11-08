#include <iostream>

struct Node 
{
    int number;
    Node* next;     

    Node(int num) : number(num), next(nullptr) {}
};

Node* addNode(int number, Node* next);

Node* removeNode(int number, Node* head);