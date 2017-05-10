// https://www.hackerrank.com/challenges/tree-level-order-traversal
// Level: Easy
// Coder: taniadr
// Tree: Level order traversal (print as bsf)
// Complexity: 

/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
#include <queue>
void LevelOrder(node * root)
{
  
  queue<node*> fila;
  node *p = root;
  
  while (p != NULL){
  	cout<<p->data<<' ';
  	
  	if (p->left != NULL)
  		fila.push(p->left);
  	
	if (p->right != NULL)
		fila.push(p->right);
	
	p = fila.front();
	fila.pop();

  }
  
}


