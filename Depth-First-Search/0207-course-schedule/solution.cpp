class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& pvis){
        vis[node]=1;
        pvis[node]=1;
        for(auto& it : adj[node]){
            if(vis[it]){
                if(pvis[it]){
                    return true;
                }
            }
            else{
                if(dfs(it, adj, vis, pvis) == true) return true;
            }
            
        }
        pvis[node]=0;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        vector<int> vis(n,0);
        vector<int> pvis(n,0);
        for(auto it : prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0; i<n; i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, pvis)==true) return false;
            }
        }
        return true;
    }
};
