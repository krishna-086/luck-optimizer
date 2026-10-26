class Solution {
    int m, n;
    void dfs(vector<vector<int>>& h, vector<vector<bool>>& vis, int r, int c, int prev){
        if(r<0 || c<0 || r>=m || c>=n) return;
        if(vis[r][c]) return;
        if(h[r][c] < prev) return;
        vis[r][c]=true;
        dfs(h, vis, r+1, c, h[r][c]);
        dfs(h, vis, r-1, c, h[r][c]);
        dfs(h, vis, r, c+1, h[r][c]);
        dfs(h, vis, r, c-1, h[r][c]);
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h){
        m=h.size(); n=h[0].size();
        vector<vector<bool>> pac(m, vector<bool>(n,false)), atl(m, vector<bool>(n,false));
        for(int i=0;i<m;i++){
            dfs(h, pac, i, 0, INT_MIN);
            dfs(h, atl, i, n-1, INT_MIN);
        }
        for(int j=0;j<n;j++){
            dfs(h, pac, 0, j, INT_MIN);
            dfs(h, atl, m-1, j, INT_MIN);
        }
        vector<vector<int>> res;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(pac[i][j] && atl[i][j]) res.push_back({i,j});
        return res;
    }
};
