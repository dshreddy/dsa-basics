// https://leetcode.com/problems/implement-stack-using-queues/
#include<bits/stdc++.h>
#define int long long int

using namespace std;

class MyStack {
public:
    queue<int> stack;
    queue<int> helper;

    MyStack() {
        
    }
    
    void push(int x) {
        stack.push(x);
    }
    
    int pop() {
        int top = stack.back();
        while(!stack.empty()) {
            int front = stack.front();
            stack.pop();
            if(!stack.empty()){
                helper.push(front);
            }
        }
        while(!helper.empty()){
            stack.push(helper.front());
            helper.pop();
        }
        return top;
    }
    
    int top() {
        return stack.back();
    }
    
    bool empty() {
        return stack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   return 0;
}