/*Problem: Linked Lists: Compare two linked lists
Level: Easy
Link: https://www.hackerrank.com/challenges/compare-two-linked-lists
Coder: taniadr // https://github.com/taniadr/hackerrank
*/

/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    Node *a, *b, *c;
    a = headA;
    b = headB;
    
    if (a == NULL && b == NULL) return 1;
    
    if ((a == NULL && b != NULL) || (b == NULL && a != NULL)) return 0;
            
    while (a != NULL && b != NULL){

        if (a->data != b->data){
            return 0;
        }
        a = a->next;
        b = b->next;
    }
    if ((a == NULL && b != NULL) || (b == NULL && a != NULL)) return 0;
    return 1;   
}

