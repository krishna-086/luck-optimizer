class Solution {
public:
    void dfs(vector<vector<int>>& adj, int& s, int& d, int i, bool& flag, vector<int>& vis){
        vis[i]=1;
        if(i==d) flag=true;
        if(flag) return;
        for(auto& it : adj[i]){
            if(!vis[it]){
                dfs(adj, s, d, it, flag, vis);
                
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(int i=0; i<edges.size(); i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool flag=false;
        vector<int> vis(n,0);
        
        dfs(adj, source, destination, source, flag, vis);
                

        
        return flag;
    }
};
