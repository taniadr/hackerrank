/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node *c = head;
    
    if (c->next == NULL){   //lista só tem 1 elem
        head = NULL;
        return head;
    }
    if (position == 0){ //delete from head
        head = c->next;
        return head;
    }
    else{
        
        for (int i=1; i<position; i++)  //para um antes
            c = c->next;
        
        Node *prev = c;
        Node *after = c->next->next;
        
        if (after == NULL)     //deleting the last elem
            prev->next = NULL;  
        else
            prev->next = after;   

    }
    return head;
}

