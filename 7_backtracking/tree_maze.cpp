#include<bits/stdc++.h>
#define int long long int

using namespace std;

class TreeNode {
    public:
        int val_;
        TreeNode* left = nullptr;
        TreeNode* right = nullptr;

        TreeNode(int val) {
            val_ = val;
        }
};

bool canReachLeaf(TreeNode *root) {
    if (!root || root->val_ == 0) {
        return false;
    }
    if (!root->left && !root->right) {
        return true;
    }
    if (canReachLeaf(root->left)) {
        return true;
    }
    if (canReachLeaf(root->right)) {
        return true;
    }
    return false;
}

bool leafPath(TreeNode* root, vector<int>* path) {
    if (!root || root->val_ == 0) {
        return false;
    }
    path->push_back(root->val_);

    if (!root->left && !root->right) {
        return true;
    }
    if (leafPath(root->left, path)) {
        return true;
    }
    if (leafPath(root->right, path)) {
        return true;
    }
    path->pop_back();
    return false;
}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
   return 0;
}
