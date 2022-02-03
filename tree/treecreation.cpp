#include <bits/stdc++.h>
using namespace std;
class tree
{
public:
    int data;
    tree *left, *right;
    tree(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
void preorder(tree *root)
{
    if (!root)
        return;
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}

int main()
{

    tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);

    preorder(root);
}