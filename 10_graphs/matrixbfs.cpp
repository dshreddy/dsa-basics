#include<bits/stdc++.h>
#define int long long int

using namespace std;

// Shortest path from top left to bottom right
int bfs(vector<vector<int>>& grid) {

    int ROWS = grid.size(), COLS = grid[0].size();

    vector<vector<int>> visit(ROWS, vector<int>(COLS));
    queue<pair<int, int>> queue;
    queue.push(pair<int, int>(0, 0));
    visit[0][0] = 1;

    int length = 0;
    while (queue.size()) {

        int queueLength = queue.size();

        for (int i = 0; i < queueLength; i++)
        {
            pair<int, int> curPair = queue.front();
            queue.pop();

            int r = curPair.first, c = curPair.second;
            if (r == ROWS - 1 && c == COLS - 1) return length;

            // We can directly build the four neighbors
            int neighbors[4][2] = {{r, c + 1}, {r, c - 1}, {r + 1, c}, {r - 1, c}};

            for (int j = 0; j < 4; j++) 
            {
                int newR = neighbors[j][0], newC = neighbors[j][1];

                if (min(newR, newC) < 0 || newR >= ROWS || newC >= COLS || visit[newR][newC] || grid[newR][newC]) {
                    continue;
                }
                queue.push(pair<int, int>(newR, newC));
                visit[newR][newC] = 1;
            }
        }
        length++;
    }
}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   cout<<(float)clock() / CLOCKS_PER_SEC<<endl;
   return 0;
}