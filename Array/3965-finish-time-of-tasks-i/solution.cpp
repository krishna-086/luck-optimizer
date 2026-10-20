class Solution {
public:
    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& baseTime) {
        vector<vector<int>> ad(n);
        for(int i=0; i<n-1; i++){
            int father=edges[i][0];
            int son=edges[i][1];
            ad[father].push_back(son);
        }
        long long fin=finish(ad, baseTime, 0);
        return fin;
        
    }
    long long finish(vector<vector<int>>& ad, vector<int>& bt, int i){
        if(ad[i].empty()) return bt[i];
        long long lat=LLONG_MIN;
        long long ear=LLONG_MAX;
        long long a;
        for(int j=0; j<ad[i].size(); j++){
            a=finish(ad, bt, ad[i][j]);
            lat=max(lat, a);
            ear=min(ear, a);
        }
        return lat+(lat-ear)+bt[i];
    }
};
