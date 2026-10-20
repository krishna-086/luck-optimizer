class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int p=0;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0){
                return n <= 1;
            }
        }
        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i]==0){
                int prev = (i==0)?0:flowerbed[i-1];
                int next=(i==flowerbed.size()-1)?0:flowerbed[i+1];
                if(prev==0 && next==0){
                    p++;
                    flowerbed[i]=1;
                }
            }
        }
        if(p>=n) return true;
        return false;
    }
};
