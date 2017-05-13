/*Problem: Linked Lists: Merge two sorted linked lists
Level: Easy
Link: https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists
Coder: taniadr // https://github.com/taniadr/hackerrank
*/

/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <vector>
#include <algorithm>

Node* MergeLists(Node *headA, Node* headB)
{
  
    if (headA == NULL) return headB;
    if (headB == NULL) return headA;
    
    Node *nhead = new Node();
    vector<int> temp(1);
    //temp.assign(1);
    
    while(headA != NULL){
        temp.push_back(headA->data);
        headA = headA->next;
    }
    while(headB != NULL){
        temp.push_back(headB->data);
        headB = headB->next;
    }
    sort(temp.begin(),temp.end());
    Node *save = nhead;
   
    nhead->data = temp[1];
    for (int i=2; i < temp.size(); i++)
    {
        nhead->next = new Node();
        nhead->next->data = temp[i];
        nhead = nhead->next;
    }

    return save;
    
}

