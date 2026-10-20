class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2; i<=cost.size(); i++){
            int f=(i==cost.size())?dp[i-1]+0:dp[i-1]+cost[i];
            int s=(i==cost.size())?dp[i-2]+0:dp[i-2]+cost[i];
            dp[i]=min(f,s);

        }
        return dp[n];
    }
};
