class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n, -1);
        dp[0]=nums[0];
        for(int i=1; i<n; i++){
            int take=nums[i]+((i>1)?dp[i-2]:0);
            int ntake=dp[i-1];
            dp[i]=max(take,ntake);
        }
        return dp[n-1];
    }
};
