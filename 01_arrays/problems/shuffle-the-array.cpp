// https://leetcode.com/problems/shuffle-the-array/

#include<bits/stdc++.h>
#define int long long int
#define endl "\n"

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int l = nums.size();
        vector<int>shuffled(l);
        for(int i=0; i<(l/2); i++){
            shuffled[2*i] = nums[i];
            shuffled[2*i+1] = nums[i+(l/2)];
        }
        return shuffled;
    }
};

signed main(){

}
