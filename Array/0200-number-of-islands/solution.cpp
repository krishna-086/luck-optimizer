class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis){
        int n=grid.size();
        int m=grid[0].size();
        vis[i][j]=1;
        
        if(i<n-1 && grid[i+1][j]!='0'){
            if(!vis[i+1][j]) dfs(i+1, j, grid, vis);
        }
        if(i>0 && grid[i-1][j]!='0'){
            if(!vis[i-1][j]) dfs(i-1, j, grid, vis);
        }
        if(j<m-1 && grid[i][j+1]!='0'){
            if(!vis[i][j+1]) dfs(i, j+1, grid, vis);
        }
        if(j>0 && grid[i][j-1]!='0'){
            if(!vis[i][j-1]) dfs(i, j-1, grid, vis);
        }
        /*if(i<n-1 && j<m-1 && grid[i+1][j+1]!='0'){
            if(!vis[i+1][j+1]) dfs(i+1, j+1, grid, vis);
        }
        if(i>0 && j<m-1 && grid[i-1][j+1]!='0'){
            if(!vis[i-1][j+1]) dfs(i-1, j+1, grid, vis);
        }
        if(i>0 && j>0 &&  grid[i-1][j-1]!='0'){
            if(!vis[i-1][j-1]) dfs(i-1, j-1, grid, vis);
        }
        if(i<n-1 && j>0 && grid[i+1][j-1]!='0'){
            if(!vis[i+1][j-1]) dfs(i+1, j-1, grid, vis);
        }*/

    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size(), 0));
        int m=grid.size();
        int n=grid[0].size();
        int c=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    c++;
                    dfs(i,j, grid,vis);
                }
            }
        }
        return c;
    }
};
