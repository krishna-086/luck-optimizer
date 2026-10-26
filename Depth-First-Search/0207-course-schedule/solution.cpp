class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        vector<int> in(n, 0);
        for(int i=0; i<prerequisites.size(); i++){
            int u=prerequisites[i][1];
            int v=prerequisites[i][0];
            adj[u].push_back(v);
            in[v]++;
        }
        queue<int> q;
        for(int i=0; i<in.size(); i++){
            if(in[i]==0) q.push(i);
        }
        int count=0;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(auto v : adj[u]){
                in[v]--;
                if(in[v]==0){
                    q.push(v);
                }
            }
            count++;
        }
        return count==n?true:false;

    }
};
