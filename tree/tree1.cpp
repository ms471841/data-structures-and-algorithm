#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{

 public:
  int data;
  node* left,*right;
  node(int val){
      data=val;
      left=NULL;
      right=NULL;
  }


};

void inorder(node *root)
{
   if(!root) return;
   inorder(root->left);
   cout<<root->data;
   inorder(root->right);
}

void preorder(node *root)
{
   if(!root) return;
   cout<<root->data;
   preorder(root->left);
   preorder(root->right);
}

void postorder(node* root)
{
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

void levelorder(node* root)
{
    if(!root) return;
    node * temp;
    queue<node*>q;stack<int>s;
    q.push(root);
    while (!q.empty())
    {
       temp=q.front();
       q.pop();
       s.push(temp->data);
       if(temp->left) q.push(temp->left);
       if(temp->right) q.push(temp->right);
    }
}

void inorderItr(node * root){
stack<node*>s;
while (1)
{
    while (root)
    {
       s.push(root);
       root=root->left;
    }
    
    if(s.empty()){break;}
    root=s.top();
    s.pop();
    cout<<root->data;
    root=root->right;
}
}

void preorderItr(node* root){

stack<node*>s;

while (1)
{
  while (root)
  {
       cout<<root->data;
       s.push(root);
       root=root->left;
  }
  if (s.empty())
  {break;
  }
  root=s.top();
  s.pop();
  root=root->right;
  

}
}



int main(){

node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
cout<<"inorder recursive:" ;
inorder(root);
cout<<endl;
cout<<"preorder recursive:";preorder(root);
cout<<endl;

cout<<"postorder recursive:" ;postorder(root);
cout<<endl;
cout<<"levelorder:";levelorder(root);
cout<<endl;
cout<<"inorder itr:";inorderItr(root);
cout<<endl;
cout<<"preorder itr:"; preorderItr(root);
cout<<endl;
}