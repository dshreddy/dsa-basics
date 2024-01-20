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

// O(logN)
bool search(TreeNode *root, int target){

    if(root == nullptr) return false;
    
    if(target > root->data) return search(root->right, target);
    else if(target < root->data) return search(root->left, target);
    else return true;
}

// O(logN)
TreeNode * insert(TreeNode *root, int data){

    if(root == nullptr) return new TreeNode(data);

    if(data > root->data) root->right = insert(root->right, data);
    else if(data < root->data) root->left = insert(root->left, data);

    return root;
}

// O(h) 
TreeNode* treeMinimum(TreeNode *root){

    if(!root) return root;

    while(root->left) root = root->left;
    return root;
}

// O(2*logN)
TreeNode * remove(TreeNode *root, int data){

    if(!root) return root;

    if(data > root->data) root->right = remove(root->right, data);
    else if(data < root->data) root->left = remove(root->left, data);
    else{

        if(!root->left) return root->right;
        else if(!root->right) return root->left;
        else{
            root->data = treeMinimum(root->right)->data;
            root->right = remove(root->right, root->data);
        }
    }
}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
   return 0;
}