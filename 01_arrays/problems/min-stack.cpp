// https://leetcode.com/problems/min-stack/
#include<bits/stdc++.h>
#define int long long int

using namespace std;

class MinStack {
public:
    // first is val, second is minimum
    stack<pair<int,int>>s;

    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }
        else{
            s.push({val,fmin(val,s.top().second)});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   return 0;
}
