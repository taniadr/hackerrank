/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include<vector>
#include<algorithm>
using namespace std;

Node* Reverse(Node *head)
{
  Node *c = head;
  Node *g;
  
  if (c->next == NULL)
  	return head;
  
  if (c != NULL){
 	vector<int> l;    
        while (c != NULL){
            l.push_back(c->data);
            c = c->next;
        }
       reverse(l.begin(), l.end());   
       c = head;
      for (vector<int>::iterator it = l.begin(); it != l.end(); it++){
          c->data = *it;
          c = c->next;
      }       
  }
  return head;
}

