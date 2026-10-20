class Solution {
public:
    bool jump(int ind, vector<int>& nums, vector<int>& dp){
        
        if(ind==nums.size()-1){
            dp[ind]=1;
            return true;
        }
        if(dp[ind]!=-1) return dp[ind]==1? true: false;
        for(int i=1; i<=nums[ind]; i++){

            if(i<=nums.size()-ind-1){
                if(jump(ind+i, nums, dp)) return true;
            }
        }
        dp[ind]=0;
        return false;
    }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return jump(0, nums, dp);
    }
};
