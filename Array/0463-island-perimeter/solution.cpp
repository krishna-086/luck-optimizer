class Solution {
public:
    int bfs(vector<vector<int>>& grid, int i, int j){
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n,0));
        queue<pair<int, int>> q;
        int para=0, p=0;
        q.push({i,j});
        vis[i][j]=1;
        vector<pair<int,int>> v={{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            
            for(auto& it: v){
                int drow=row+it.first;
                int dcol=col+it.second;
                if(drow<m && drow>=0 && dcol<n && dcol>=0 && grid[drow][dcol]!=0){

                    p++;
                    if(vis[drow][dcol]!=1){
                        q.push({drow, dcol});
                        vis[drow][dcol]=1;
                    }
                }
                
            }
            para+=4-p;
            q.pop();
            p=0;

        }
        return para;


    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        int para;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    cnt++;
                    para=bfs(grid, i, j);
                }
                if(cnt==1) break;
            }
            if(cnt==1) break;
        }
        return para;
    }
};
