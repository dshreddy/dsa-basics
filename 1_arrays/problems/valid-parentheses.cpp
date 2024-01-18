// https://leetcode.com/problems/valid-parentheses/

#include<bits/stdc++.h>
#define int long long int

using namespace std;

class Solution {
public:
    bool isValid(string s) {

        int l = s.size();
        bool ans = true;

        stack<char>st;

        for(int i=0; i<l; i++){

            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                else {
                    ans = false;
                    break;
                }
            }
            else if(s[i]=='}'){
                if(!st.empty() && st.top()=='{'){
                    st.pop();
                }
                else {
                    ans = false;
                    break;
                }
            }
            else if(s[i]==']'){
                if(!st.empty() && st.top()=='['){
                    st.pop();
                }
                else {
                    ans = false;
                    break;
                }
            }
        }

        return ans==false ? false : (st.empty());
    }
};

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//    int t; cin>>t;
//    while(t--)
//    solve();
//    cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
   return 0;
}
