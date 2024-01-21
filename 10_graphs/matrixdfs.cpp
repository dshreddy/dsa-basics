#include<bits/stdc++.h>
#define int long long int

using namespace std;


// dfs assuming in the grid, 0 represents a node & 1 represents not a node
int dfs(vector<vector<int>> &grid, int r, int c, unordered_set<pair<int,int>>visit){

    int m = grid.size(), n = grid[0].size();
    if(r<0 || c<0 || r>=m || c>=n || grid[r][c]==1 || visit.count({r,c})) return 0;

    if(r==m-1 && c==n-1) return 1;

    visit.insert({r,c});

    int count = 0;
    count += dfs(grid,r-1,c,visit);
    count += dfs(grid,r,c-1,visit);
    count += dfs(grid,r+1,c,visit);
    count += dfs(grid,r,c+1,visit);

    visit.erase({r,c});
    return count;
}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
   return 0;
}