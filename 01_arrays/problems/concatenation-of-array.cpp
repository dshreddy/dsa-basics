// https://leetcode.com/problems/concatenation-of-array/

#include<bits/stdc++.h>
#define int long long int

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int l = nums.size();
        vector<int>ans(2*l);
        for(int i=0; i<l; i++){
            ans[i] = nums[i];
            ans[i+l] = nums[i];
        }
        return ans;
    }
};

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

//    int t; cin>>t;
//    while(t--)
//    solve();
   cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
   return 0;
}