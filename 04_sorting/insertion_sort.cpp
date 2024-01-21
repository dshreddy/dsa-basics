#include<bits/stdc++.h>
#define int long long int

using namespace std;

void solve() {
     
     int arr[] = {3,4,5,9,-1,0};

     int n = sizeof(arr)/sizeof(arr[0]);

     int i = 0,j =0;

     for(int i=0; i<n; i++){
        j = i+1;
        while(j<n){
            if(arr[i]>arr[j]) swap(arr[i],arr[j]);
            j++;
        }
     }

     for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
     }
     cout<<"\n";
}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   solve();
   return 0;
}