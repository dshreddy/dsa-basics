#include<bits/stdc++.h>
#define int long long int

using namespace std;

// O(log(m*n)) = O(log(m)+log(n))
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        int l = 0, r = m-1, row = -1, mid;

        while(l <= r){

            mid = (l+r)/2;

            if(matrix[mid][0] <= target && target <= matrix[mid][n-1]){
                row = mid;
                break;
            }
            else if(target > matrix[mid][n-1]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        if(row == -1) return false;

        l = 0;
        r = n-1; 
        int col = -1;

        while(l <= r){

            mid = (l+r)/2;

            if(matrix[row][mid] <= target && target <= matrix[row][mid]){
                col = mid;
                break;
            }
            else if(target > matrix[row][mid]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        if(col == -1) return false;
        
        return true;
    }
};

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   solve();
   return 0;
}