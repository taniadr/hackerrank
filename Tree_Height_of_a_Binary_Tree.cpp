// https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree
// Level: Easy
// Coder: taniadr
// Tree: Height of a Binary Tree
// Complexity: 


/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

    int n = 0;
    void postOrder(Node *root){    
        if (root == NULL)
            return;
        postOrder(root->left);
         n++;
        postOrder(root->right);
    }

    int height(Node* root) {
        int a,b;
        if (root == NULL)
            return 0;
        else{
            postOrder(root->left);
            a = n;
            n = 0;
            postOrder(root->right);
            b = n;
        }
         a = max(a,b);
        return a-1;        
    }
  

