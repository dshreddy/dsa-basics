// https://leetcode.com/problems/course-schedule/description/

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        unordered_map<int,vector<int>> graph;
        unordered_map<int,int>indegree;

        for(int i=0; i<numCourses; i++) indegree[i] = 0;

        for(vector<int>edge : prerequisites){

            // edge : b->a
            int a = edge[0], b = edge[1];
            graph[b].push_back(a);
            indegree[a]++;
        }

        int check = 0;
        queue<int>q;
        for(auto it: indegree){

            if(it.second == 0){
                check++;
                q.push(it.first);
            }
        }

        while(!q.empty()){

            int l = q.size();
            for(int i=0; i<l; i++){

                int u = q.front();
                q.pop();

                for(auto v: graph[u]){

                    indegree[v]--;
                    if(indegree[v]==0){
                        check++;
                        q.push(v);
                    }
                }
            }
        }

        return check==numCourses;
    }
};