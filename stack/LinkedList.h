#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

struct Node
{
    int number;
    Node* next;

    Node(int num) : number(num), next(nullptr) {}
};

// Function to add a node at the beginning of the list
Node* addNode(Node* head, int number);

// Function to remove a node by value from the list
Node* removeNode(Node* head);

#endif
