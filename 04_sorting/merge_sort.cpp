#include<bits/stdc++.h>
#define int long long int

using namespace std;

void merge(int p, int mid, int q, vector<int>&v){

    int temp[q-p+1];
    int i = p, j = mid+1, k = 0;

    while(i<=mid && j<=q){

        if(v[i] < v[j]) temp[k++] = v[i++]; 
        else temp[k++] = v[j++];
    }

    while(i<=mid) temp[k++] = v[i++]; 
    while(j<=q) temp[k++] = v[j++]; 

    for(int i=p; i<=q; i++){

        v[i] = temp[i-p];
    }
}

void mergeSort(int p, int q, vector<int>&v){
    if(p<q){
        int mid = (p+q)/2;
        mergeSort(p, mid, v);
        mergeSort(mid+1, q, v);
        merge(p, mid, q, v);
    }
}

void solve() {

    vector<int>v = {3,4,5,9,-1,0};

    mergeSort(0,v.size()-1,v);

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