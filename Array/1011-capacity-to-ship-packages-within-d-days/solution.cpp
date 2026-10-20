class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
        int n=w.size();
        int lo=INT_MIN, hi=0;
        for(int i=0; i<n; i++){
            hi+=w[i];
            lo=max(lo, w[i]);

        }
        
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            int d=1;
            int wt=mid;
            for(int i=0; i<n; i++){
                if(w[i]> wt){
                    d++;
                    wt=mid;
                }
                wt-=w[i];
            }
            
            if(d>days) lo=mid+1;
            else hi=mid;
        }
        return hi;
    }
};
