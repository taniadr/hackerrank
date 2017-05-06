//Problem: Get Node Value
//Link: https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail
//Level: Easy
//coder: taniadr
/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <vector>
int GetNode(Node *head,int positionFromTail)
{
    Node *p = head;
    int count=0;
    vector<int> go;
    int pos = positionFromTail;
    
    if (p->next == NULL)
        return p->data;
        
    while (p->next != NULL)
    {
        go.push_back(p->data);
        p = p->next;
    }

    return go[go.size()-pos];
}

