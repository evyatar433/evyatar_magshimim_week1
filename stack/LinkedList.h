#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

struct Node
{
    int number;
    Node* next;

    Node(int num) : number(num), next(nullptr) {}
};

// function add a node at the beginning of the list
Node* addNode(Node* head, int number);

// function to remove the first node
Node* removeNode(Node* head);

#endif
