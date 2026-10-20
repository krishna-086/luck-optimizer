class Solution {
public:
    bool check(vector<int>& nums) {
        int j=0;
        int n=nums.size();
        for(int i =0; i<n; i++){
            if(nums[i]>nums[(i+1)%n]){
                j++;
            }
        }
        if(j>1) return false;
        return true;
    }
};
