// https://leetcode.com/problems/number-of-islands/

class Solution {
public:

    void dfs(vector<vector<char>>& grid, int r, int c,set<pair<int,int>>&visit){

        int ROWS = grid.size(), COLS = grid[0].size();

        if(min(r,c)<0 || r>=ROWS || c >=COLS || grid[r][c] == '0' || visit.count({r,c})) return;

        visit.insert({r,c});

        dfs(grid,r,c+1,visit);
        dfs(grid,r,c-1,visit);
        dfs(grid,r+1,c,visit);
        dfs(grid,r-1,c,visit);
    }

    int numIslands(vector<vector<char>>& grid) {

        int ROWS = grid.size(), COLS = grid[0].size(), numConnComp = 0;

        set<pair<int,int>> visit;

        for(int i=0; i<ROWS; i++){
            for(int j=0; j<COLS; j++){
                if(grid[i][j]=='1' && !visit.count({i,j})) 
                {
                    cout<<i<<j<<endl;
                    dfs(grid,i,j,visit);
                    numConnComp++;
                }
            }
        }

        return numConnComp;
    }
};