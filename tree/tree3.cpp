/*program to add new node at the null position*/


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




void searchItr(node* root,int x){
queue<node*>q;
node* temp;
q.push(root);
while(!q.empty()){

 temp=q.front();
  q.pop();
 if(!temp->left){
     temp->left=new node(x);
     return;
 }else{
 q.push(temp->left);
 }
 if(!temp->right){
     temp->right=new node(x);
     return ;
 }else
 {
    q.push(temp->right);
 }
 }

}
void levelorder(node* root){

    if(!root){
        return;
    }

    node * temp;
    queue<node*>q;
    q.push(root);
    while (!q.empty())
    {
        temp=q.front();
        q.pop();
        cout<<temp->data;
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
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

//cout<<searchrecu(root,0)<<endl;
searchItr(root,8);
searchItr(root,9);
searchItr(root,10);
levelorder(root);
}