#include<bits/stdc++.h>
#define int long long int

using namespace std;

class HashSet{

private:

    int size;
    vector<int> arr[size];
    int hash(int key) { return key%size; }

public:

    void add(int number){

        int index = hash(number);
        for(int i=0; i<arr[index].size(); i++) if(arr[index][i]==number) return;
        arr[index][i].push_back(number);
    }

    bool contains(){

        int index = hash(number);
        for(int i=0; i<arr[index].size(); i++) if(arr[index][i]==number) return true;
        return false
    }

    void remove(){

        int index = hash(number);
        for(int i=0; i<arr[index].size(); i++) if(arr[index][i]==number) arr[index].erase(arr[index].begin()+i);
        return;
    }
}

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
   return 0;
}