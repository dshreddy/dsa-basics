// PROBLEM LINK : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include<bits/stdc++.h>
#define int long long int
#define endl "\n"

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int l = nums.size();

        // first get all the distinct elements in the set
        set<int>s;
        for(int i=0; i<l; i++){
            s.insert(nums[i]);
        }

        //now keep the distinct elements in the array as the prefix of the array
        int i=0, k = s.size();
        for(auto it=s.begin(); it!=s.end(); it++){
            nums[i] = *it;
            i++;
        }
        // It doesn't matter what the rest of the array is
        for(;i<l;i++){
            nums[i]=i;
        }
        //return number of distinct elements in the array
        return k;
    }
};

signed main(){

  
}
