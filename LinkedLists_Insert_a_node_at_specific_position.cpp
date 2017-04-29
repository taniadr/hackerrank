/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *novo = new Node;
    novo->data = data;
    novo->next = NULL;
    
    Node *c = head;
    
    if (c == NULL){
        novo->next = NULL;
        head = novo;
        return head;
    }
    if (position == 0){			//era isso que eu estava esquecendo!!!
          novo->next = c;
          head = novo;
          return head;
      } 
    else{
        for (int i=1; i<position; i++){ 
            c = c->next;
        }
        if (c->next == NULL)    //insere no final
        {
            c->next = novo;
        }
        else{
            Node *prev = c;
            Node *after = c->next;
            
            novo->next = after;
            prev->next = novo; 
        }        
    }

    return head;
}

