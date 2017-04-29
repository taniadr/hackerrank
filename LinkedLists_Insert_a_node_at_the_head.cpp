/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    Node *begin = new Node;
    begin->data = data;
    
    Node *cur = head;
    if (cur == NULL){   //empty list
        begin->next = NULL;
        head = begin;
    }    
    else{
        begin->next = head;
        head = begin;     
    }

    return head;
}

