#include<iostream>
#include<queue>

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
int searchrecu(node* root,int x){
int temp;
if(root==NULL){
    return 0;
}
else
{
    if(root->data==x){return 1;}
    else
    {
        temp=searchrecu(root->left,x);
        if(temp!=0){
            return temp;
        }
        return searchrecu(root->right,x);
    }
    
}
}
int searchItr(node* root,int x){
queue<node*>q;
node* temp;
q.push(root);
while(!q.empty()){

 temp=q.front();
 if(temp->data==x){return 1;}
 q.pop();
 if(root->left){
     root=root->left;
 }
 if(root->right){
     root=root->right;
 }

}

return 0;

}

int main()
{
node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);

cout<<searchrecu(root,0)<<endl;
cout<<searchItr(root,2 );

}