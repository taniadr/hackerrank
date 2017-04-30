/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
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

void ReversePrint(Node *head)
{
    Node *c = head;
    if (c != NULL){
        vector<int> l;    
        while (c != NULL){
            l.push_back(c->data);
            c = c->next;
        }
        reverse(l.begin(), l.end());      
        for (vector<int>::iterator it = l.begin(); it != l.end(); it++)
            cout<<*it <<endl;
    }
}

