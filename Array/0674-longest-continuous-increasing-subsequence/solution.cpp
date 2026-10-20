class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int Maxi=0;
        int m=1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                m++;
            }
            else{
                Maxi=max(Maxi, m);
                m=1;
            }
        }
        Maxi=max(Maxi, m);
        return Maxi;
        
    }
};
