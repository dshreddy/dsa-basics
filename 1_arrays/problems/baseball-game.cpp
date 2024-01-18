// https://leetcode.com/problems/baseball-game/description/

#include<bits/stdc++.h>
#define int long long int

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int l = operations.size();
        stack<int>s;
        for(int i=0; i<l; i++){
            if(operations[i]=="C"){
                s.pop();
            }
            else if(operations[i]=="D"){
                s.push(2*s.top());
            }
            else if(operations[i]=="+"){
                int top = s.top();
                s.pop();
                int secondTop = s.top();
                s.push(top);
                s.push(top+secondTop);
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        while(!s.empty()){
            sum += s.top();
            s.pop();
        } 
        return sum;
    }
};

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//    int t; cin>>t;
//    while(t--)
//    solve();
//    cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
//    return 0;
}