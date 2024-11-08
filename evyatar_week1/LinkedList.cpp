#include iostream
#include linkedList.h


 function will create a node
Node addNode(int number, Node next)
{
    Node newNode = new Node(number);
    newNode-next = next;
    return newNode;
}

 function will delete a node
Node removeNode(int number, Node head) 
{
    if (head == NULL) 
    {
        return NULL;  
    }

    Node temp = head;
    head = head-next;     move head to the next node
    delete temp;           delete the old head node
    return head;                                            
}
