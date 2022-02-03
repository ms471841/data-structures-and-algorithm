//progrgam to delete the tree

#include<iostream>
#include<stack>
using namespace std;


class tree6
{
public:
    int data;
    tree6 *left,*right;
    tree6(int);
   
};

tree6::tree6(int x)
{
    data=x;
    left=NULL;
    right=NULL;
}

stack<tree6>s;
void deletetree(tree6* root){

 if(!root){
     return;
 }
deletetree(root->left);
deletetree(root->right);
s.push(root->data);
delete root;
}




int main(){

tree6 *root=new tree6(1);
root->left=new tree6(2);
root->right=new tree6(3);
root->left->left=new tree6(4);
root->left->right=new  tree6(5);
root->right->left=new tree6(6);
root->right->right=new tree6(7);

deletetree(root);

}