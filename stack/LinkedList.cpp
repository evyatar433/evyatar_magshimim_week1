#include <iostream>
#include "linkedList.h"

// function will create a node
Node* addNode(Node* head, int number) 
{
    Node* newNode = new Node(number);
    newNode->next = head;
    head = newNode;
    return head;
}


// function will delete a node 
Node* removeNode(Node* head) 
{
    if (head == nullptr) 
    {
        return nullptr;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

int main()

{
    Node* head = nullptr;

    // add some nodes
    head = addNode(head, 10);
    head = addNode(head, 20);
    head = addNode(head, 30);

    // print the numbers
    Node* current = head;
    while (current != nullptr) 
    {
        std::cout << current->number << " ";
        current = current->next;
    }
    std::cout << std::endl;

    head = removeNode(head);

    current = head;
    while (current != nullptr) 
    {
        std::cout << current->number << " ";
        current = current->next;
    }
    std::cout << std::endl;

    return 0;
}