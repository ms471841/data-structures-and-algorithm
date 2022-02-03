//progrgam to find the size of the tree

#include<iostream>
#include<queue>
using namespace std;


class tree4
{
public:
    int data;
    tree4 *left,*right;
    tree4(int);
    //~tree4();
};

tree4::tree4(int x)
{
    data=x;
    left=NULL;
    right=NULL;
}



// tree4::~tree4()
// {
//     delete tree4;
// }

int sizeofbinarytree(tree4* root){

 if(!root){
     return 0;
 }
return sizeofbinarytree(root->left)+1+sizeofbinarytree(root->right);

}
int sizeoftree(tree4* root){

 tree4 * temp;
 queue<tree4*>q;
 int count=0;
 q.push(root);
 while (!q.empty())
 {
    temp=q.front();
    count++;
    q.pop();
    if(temp->left){q.push(temp->left);}
    if(temp->right){q.push(temp->right);}
 }
 
return count;


     
}

int main(){

tree4 *root=new tree4(1);
root->left=new tree4(2);
root->right=new tree4(3);
root->left->left=new tree4(4);
root->left->right=new  tree4(5);
root->right->left=new tree4(6);
root->right->right=new tree4(7);

cout<<"using recusion:"<<sizeofbinarytree(root)<<endl;
cout<<"using itreator:"<<sizeoftree(root);

}