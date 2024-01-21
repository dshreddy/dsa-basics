#include<bits/stdc++.h>
#define int long long int

using namespace std;

void solve(vector<int> &v, int x) {
    
    int l = 0, r = v.size()-1;

    // O(log n)
    while(l<=r){

        int mid = (l+r)/2;

        if(x > v[mid]){
            l = mid+1;
        }
        else if(x < v[mid]){
            r = mid-1;
        }
        else{
            cout<<mid<<"\n";
            break;
        }
    }
}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   return 0;
}