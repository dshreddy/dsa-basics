#include<bits/stdc++.h>
#define int long long int

using namespace std;

class Solution {
public:

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        if(preorder.size()==0) return nullptr;
        
        TreeNode * root = new TreeNode(preorder[0]);
        preorder.erase(preorder.begin());

        vector<int> leftSubTreeInorder;
        vector<int> rightSubTreeInorder;

        int i = 0;
        for(;i<inorder.size(); i++){

            if(inorder[i]==root->val){
                break;
            }
            leftSubTreeInorder.push_back(inorder[i]);
        }
        i++;
        for(;i<inorder.size(); i++){
            rightSubTreeInorder.push_back(inorder[i]);
        }

        vector<int> leftSubTreePreorder;
        vector<int> rightSubTreePreorder;
        i = 0;
        for(;i<leftSubTreeInorder.size(); i++){
            leftSubTreePreorder.push_back(preorder[i]);
        }
        for(;i<preorder.size();i++){
            rightSubTreePreorder.push_back(preorder[i]);
        }

        root->left = buildTree(leftSubTreePreorder,leftSubTreeInorder);
        root->right = buildTree(rightSubTreePreorder,rightSubTreeInorder);
        return root;
    }
};

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
   return 0;
}