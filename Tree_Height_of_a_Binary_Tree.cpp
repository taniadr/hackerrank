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

//Estratégia: Faz um postOrder em cada branch (esquerdo e direito)
//dentro do MESMO FUCKING METODO. É recursivo, nao vai dar erro.
//Como o peso da raíz é 0, quando chegar numa folha, retorna -1 para
//retirar o peso adicional da raiz!

 int height(Node* root) {
        if (root == NULL) 
            return -1;
        else
       {
           int lDepth = height(root->left);
           int rDepth = height(root->right);

           if (lDepth > rDepth) 
               return(lDepth+1);
           else return(rDepth+1);
       }
    } 


