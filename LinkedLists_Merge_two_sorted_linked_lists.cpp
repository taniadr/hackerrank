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
   Node *a, *b, *nhead, *prev;
   a = headA;
   b = headB;
    
    if (a == NULL ) return headB;
    
    if (b == NULL) return headA;
    
  	while (a->next != NULL){
  		prev = a;
  		a = a->next
  		if (b != NULL && a!= NULL){
  			if (b->data < a->data )
  			{
				  prev->next = new Node;
				  prev->data = b->data;
				  prev->next = a;
  				
			  }
		  }
  		
	  }
    return a;
    
}

