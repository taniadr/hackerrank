/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *end = new Node;
    end->data = data;
    end->next = NULL;
    
    Node *cur = head;
   
    if (cur == NULL){
        cur = end;
        head = cur;
    }
    else{
        while (cur->next != NULL){
            cur = cur->next;
        }
        cur->next = end;
    }
    return head ;
}
