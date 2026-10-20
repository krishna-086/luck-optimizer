class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>> q;
        int t=0;
        vector<pair<int, int>> v={{1,0}, {-1,0}, {0,1}, {0,-1}};
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==2) q.push({i,j});
            }
        }
        while(!q.empty()){
            int k=q.size();
            for(int j=0; j<k; j++){
                int row=q.front().first;
                int col=q.front().second;
                q.pop();
                
                

                for(int i=0; i<v.size(); i++){
                    int drow=row+v[i].first;
                    int dcol=col+v[i].second;
                    if(drow>=0 && drow<m && dcol>=0 && dcol<n && grid[drow][dcol]==1){
                        grid[drow][dcol]=2;
                        q.push({drow,dcol});
                    }
                }
            }
            t++;
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return t==0?0:t-1;
    }
};
