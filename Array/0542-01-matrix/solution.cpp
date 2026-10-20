class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> ans(m, vector<int>(n,0));
        queue<pair<pair<int,int>, int>> q;
        for(int i =0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==0) q.push({{i,j},0});
            }
        }
        vector<pair<int,int>> v={{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int dis=q.front().second;
            ans[row][col]=dis;
            q.pop();
            for(int i=0; i<4; i++){
                int drow=row+v[i].first;
                int dcol=col+v[i].second;
                if(drow>=0 && drow<m && dcol>=0 && dcol<n && mat[drow][dcol]==1){
                    q.push({{drow,dcol},dis+1});
                    mat[drow][dcol]=0;
                }
            }
        }
        return ans;
    }
};
