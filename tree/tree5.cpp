//progrgam to print reverse level order traversal

#include<iostream>
#include<queue>
#include<stack>
using namespace std;


class tree4
{
public:
    int data;
    tree4 *left,*right;
    tree4(int);
   
};

tree4::tree4(int x)
{
    data=x;
    left=NULL;
    right=NULL;
}



void sizeoftree(tree4* root){

 tree4 * temp;
 queue<tree4*>q;
 stack<int>s;
 q.push(root);
 while (!q.empty())
 {
    temp=q.front();
   
    q.pop();
    if(temp->left){q.push(temp->left);}
    s.push(temp->data);
    if(temp->right){q.push(temp->right);}
     
 }

 while (!s.empty())
 {
     cout<<s.top();
     s.pop();
 }
 
      
}



int main(){

tree4 *root=new tree4(1);
root->left=new tree4(2);
root->right=new tree4(3);
root->left->left=new tree4(4);
root->left->right=new  tree4(5);
root->right->left=new tree4(6);
root->right->right=new tree4(7);


sizeoftree(root);

}