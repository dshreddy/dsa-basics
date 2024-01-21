#include<bits/stdc++.h>
#define int long long int

using namespace std;

void quickSort(int p, int q, vector<int>&arr){

    if(p>=q){
        return;
    }

    int i = p, j = p, pivot = q;

    while(i<pivot){
        if(arr[i]<pivot){
            swap(arr[i],arr[j]);
            j++;
        }
        i++;
    }
    swap(arr[pivot], arr[j]);
    quickSort(pivot+1, q, arr);
    quickSort(p, pivot-1, arr);
}

void solve() {

    vector<int>v = {3,4,5,9,-1,0};

    quickSort(0,v.size()-1,v);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"\t";
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