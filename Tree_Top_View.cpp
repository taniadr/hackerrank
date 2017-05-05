// https://www.hackerrank.com/challenges/tree-top-view
// Level: Easy
//coder: taniadr

/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
#include<vector>

void top_view(node * root)
{
    node *keep = root;
    node *c = root;
    
    if (root == NULL) return;
    vector<int> disp;
    
    c = c->left; //avoid inserting the root twice
    
    while (c != NULL){
        disp.push_back(c->data);
        c = c->left;
    }
    reverse(disp.begin(), disp.end());
    
    while (keep != NULL){
        disp.push_back(keep->data);
        keep = keep->right;
    }
    for (int i=0; i<disp.size(); i++)
        cout<<disp[i]<<' ';
  
}

