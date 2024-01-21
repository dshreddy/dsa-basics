// https://leetcode.com/problems/shortest-path-in-binary-matrix/

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int ROWS = grid.size();
        int COLS = grid[0].size();

        queue<pair<int,int>>q;
        vector<vector<int>>visited(ROWS, vector<int>(COLS,0));

        if(grid[0][0]==0) {
            q.push({0,0});
            visited[0][0] = 1;
        }

        int length = 1;
        while(!q.empty()){

            int l = q.size();
            for(int i=0; i<l; i++){

                pair<int,int> u = q.front();
                q.pop();

                int r = u.first, c = u.second;
                cout<<r<<c<<endl;
                
                if(r==ROWS-1 && c==COLS-1) return length;

                vector<vector<int>>nbs = {{r-1,c-1},{r,c-1},{r+1,c-1},{r-1,c},{r+1,c},{r-1,c+1},{r,c+1},{r+1,c+1}};
                for(int j=0; j<nbs.size(); j++){

                    int nr = nbs[j][0];
                    int nc = nbs[j][1];

                    if(min(nr,nc)<0 || nr==ROWS || nc==COLS || grid[nr][nc]==1 || visited[nr][nc]){
                        continue;
                    }

                    q.push({nr,nc});
                    visited[nr][nc] = 1;
                }
            }
            length++;
        }

        return -1;
    }
};