class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx=0;
        for(int i=0; i<piles.size(); i++){
            mx=max(mx, piles[i]);
        }
        int lo=1;
        int hi=mx;
        int mn=INT_MAX;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            int hr=0;
            for(int i=0; i<piles.size(); i++){
                hr+=piles[i] / mid + (piles[i] % mid != 0);
            }
            if(hr>h) lo=mid+1; 
            else if(hr<=h){
                hi=mid;
                mn=min(mn, mid);
            }
             
        }
        return hi;
    }
};
