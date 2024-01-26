#include<bits/stdc++.h>
#define int long long int

using namespace std;

class TreeNode{
public:
    int data;
    TreeNode *left = nullptr;
    TreeNode *right = nullptr; 

    TreeNode(int x):data(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *l, TreeNode *r):data(x), left(l), right(r) {}
};

// O(N)
void preorder(TreeNode *root){
    if(root == nullptr) return;

    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
}

// O(N)
void inorder(TreeNode *root){
    if(root == nullptr) return;

    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}

// O(N)
void postorder(TreeNode *root){
    if(root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
}

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   TreeNode * root = new TreeNode(4);
   root->left = new TreeNode(3);
   root->right = new TreeNode(6);

   root->left->left = new TreeNode(2);

   root->right->left = new TreeNode(5);
   root->right->right = new TreeNode(7);

   preorder(root);
   cout<<"\n";
   inorder(root);
   cout<<"\n";
   postorder(root);
   cout<<"\n";

   cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
   return 0;
}