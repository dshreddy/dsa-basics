// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/

#include<bits/stdc++.h>
#define int long long int

using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches)
    {
        
        queue<int> q;
        stack<int>s;

        for(auto student : students){
            q.push(student);
        }
        reverse(sandwiches.begin(), sandwiches.end());
        for(auto sandwhich : sandwiches){
            s.push(sandwhich);
        }

        int numberOfStudentsRejected = 0;

        while(!s.empty()){

            if(s.top()==q.front()){
                numberOfStudentsRejected = 0;
                s.pop();
                q.pop();
            }
            else{
                numberOfStudentsRejected ++;
                cout<<numberOfStudentsRejected<<"\n";
                if(numberOfStudentsRejected == q.size()){
                    break;
                }
                q.push(q.front());
                q.pop();
            }
        }

        return q.size();
    }
};

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   return 0;
}