// https://www.hackerrank.com/challenges/ctci-is-binary-search-tree
//coder: taniadr

/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
#include <vector>
//using namespace std;

vector<int> lista;

void inOrder(Node *root){	//trasverse the tree in a sorted-way
    if (root == NULL)
        return;
    inOrder(root->left);
    lista.push_back(root->data);
    inOrder(root->right);    
    
}
   bool checkBST(Node* root) {
        
       if (root == NULL) return false;
       else{
           inOrder(root);
           for (int i=0; i<lista.size()-1; i++)
               if (lista[i] >= lista[i+1])	//binary search tree doesnt have duplicated elements
                return false;
       }
       return true;
   }

