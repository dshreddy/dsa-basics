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
void bfs(TreeNode * root){

    queue<TreeNode*>q;
    if(root) q.push(root);

    int level = 0;
    while(!q.empty()){

        cout<<"level : "<<level<<"\n";

        int length = q.size();

        for(int i=0; i<length; i++){
            TreeNode* u = q.front();
            q.pop();

            cout<<u->data<<"\n";

            if(u->left) q.push(u->left);
            if(u->right) q.push(u->right);
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