#include<bits/stdc++.h>
#define int long long int
#define endl "\n"

using namespace std;

class Stack{

  public:

    vector<int>v = {};

    void push(int number){
      v.push_back(number);
    }

    void pop(){
      if(v.size()>0){
        v.pop_back();
      }
    }
};

signed main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Stack s = Stack();
  s.push(3);
  s.pop();
}
