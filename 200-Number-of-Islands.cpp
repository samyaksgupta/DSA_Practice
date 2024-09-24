class Solution {
private:
    void bfs(int i, int j, vector<vector<int>> &vis, vector<vector<char>>&grid ) {
        vis[i][j] = 1;
        queue<pair<int,int>> q;
        q.push({i,j});
        int n = grid.size();
        int m = grid[0].size();

        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            //traverse in its neighbhours 
            for ( int di = -1 ; di <= 1 ; di++ ) {
                for (int dj = -1 ; dj <= 1; dj++) {
                    if (abs(di) == abs(dj)) { // just 4 sides not eight 
                    continue;
                    }
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '1' && !vis[ni][nj] ) {
                        vis[ni][nj] = 1;
                        q.push({ni,nj});
                    }
                }
            }
        }
 
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,  vector<int>(m, 0));
        int cnt = 0; 
        for (int i = 0 ; i < n; i ++ ) {
            for (int j = 0 ; j < m ; j++) {
                if(!vis[i][j] && grid[i][j] == '1') {
                    cnt++;
                    bfs(i, j, vis, grid);
                }
                
            }

        }
        return cnt;

        
        
    }
};