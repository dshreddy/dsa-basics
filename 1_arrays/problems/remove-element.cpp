// https://leetcode.com/problems/remove-element/submissions/1149872167/

#include<bits/stdc++.h>
#define int long long int
#define endl "\n"

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int l = nums.size();

        // first get all the k elements 
        vector<int>v;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                v.push_back(nums[i]);
            }
        }

        //then make the k elements of the array
        int i = 0, k = v.size();
        for(;i<k; i++){
            nums[i] = v[i];
        }
        for(;i<l;i++){
            nums[i] = 0;
        }
        return k;
    }
};

signed main(){

}

