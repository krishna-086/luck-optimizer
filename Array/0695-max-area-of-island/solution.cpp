class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j, int m, int n){
        if(i>m-1 || j > n-1 || i<0 || j<0 || grid[i][j]==0) return 0;
        grid[i][j]=0;
        int r=dfs(grid,i+1, j, m,n);
        int l=dfs(grid, i-1, j, m,n);
        int u=dfs(grid, i, j-1, m, n);
        int d=dfs(grid, i, j+1, m, n);
        return r+l+u+d+1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int maxi=0;
        int n=grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]!=0){
                    maxi=max(maxi, dfs(grid, i, j, m, n));
                }
            }
        }
        return maxi;
    }
};
