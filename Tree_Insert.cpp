// https://www.hackerrank.com/challenges/binary-search-tree-insertion
// Level: Easy
// Coder: taniadr
// Binary Search Tree : Insertion
// Complexity: O(h) , in a tree of height h.

/*
typedef struct node
{
   int data;
   node * left;  node * right;
}node; */

//Segundo o algoritmo de Cormen (3rd ed. p294)
//Complexity: O(h) , in a tree of height h.

node * insert(node * root, int value)
{
    node *x = root;
    node *y = NULL;
    node * z = new node;
    
    z->data = value;
    z->right = NULL;
    z->left = NULL;
    
   while (x != NULL){
       y = x;				//y is the parent of x
       if (z->data < x->data)
           x = x->left;		//desce pra esquerda da arvore
       else
           x = x->right; 	//desce pra direita
   }
    //z->p = y; //what the hell is p? - is in the book btw
    if (y == NULL)	//nem entrou no while, a arvore estava vazia
        root = z;
    else{
        if (z->data < y->data)	
            y->left = z;
        else
            y->right = z;
    }
    
   return root;
}

