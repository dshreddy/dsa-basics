#include<bits/stdc++.h>
#define int long long int

using namespace std;

class TreeNode{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode():data(0), left(nullptr), right(nullptr) {}
    TreeNode(int x):data(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *l, TreeNode *r):data(x), left(l), right(r) {}
};

// O(N)
void preorder(TreeNode *root){
    if(root == nullptr) return;

    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

// O(N)
void inorder(TreeNode *root){
    if(root == nullptr) return;

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

// O(N)
void postorder(TreeNode *root){
    if(root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
   return 0;
}