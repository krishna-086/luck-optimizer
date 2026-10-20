class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        vector<long long> dp(nums.size());
        dp[0]=nums[0];
        long long t=dp[0], s;
        int i;
        for(i=1; i<nums.size(); i++){
            if(colors[i]==colors[i-1]){
                t=nums[i];
                if(i>1) t+=dp[i-2];
            }
            else{
                t=dp[i-1]+nums[i];
            }
            s=dp[i-1];
            dp[i]=max(s,t);
        }
        return dp[i-1];
    }
};
