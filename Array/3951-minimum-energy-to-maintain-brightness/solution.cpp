class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        int bulb=(brightness/3)+(brightness%3==0?0:1);
        long long time=0;
        sort(intervals.begin(), intervals.end());
        int f=intervals[0][0];
        int s=intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            int t=intervals[i][0];
            if(t<=s){
                s=max(s, intervals[i][1]);
            }
            else{
                time+=s-f+1;
                f=intervals[i][0];
                s=intervals[i][1];
            }
        }
        time+=s-f+1;
        long long ener=bulb*time;
        return ener;
    }
};
