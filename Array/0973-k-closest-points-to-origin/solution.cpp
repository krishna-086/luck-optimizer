class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res(k, vector<int>(2));
        priority_queue<pair<int, pair<int, int>>> pq;
        for(int i=0; i<points.size(); i++){
            int x=points[i][0], y=points[i][1];
            int sq=(x*x)+(y*y);
            if(i<k) pq.push({sq, {x,y}});
            else if(sq<pq.top().first){
                pq.pop();
                pq.push({sq, {x,y}});
            }
        }
        for(int i=k-1; i>=0; i--){
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            pq.pop();
            res[i][0]=x;
            res[i][1]=y;
        }
        return res;

    }
};
