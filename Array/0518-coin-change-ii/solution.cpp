class Solution {
public:
    int count=0;
    int cnt(int ind, int amount, vector<int>& coins, vector<vector<int>>& dp){
        if(ind==0){
            return dp[ind][amount]=amount%coins[ind]==0?1:0;
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int ntake=cnt(ind-1, amount, coins, dp);
        int take=0;
        if(amount>=coins[ind]){
            take=cnt(ind, amount-coins[ind], coins, dp);
        }
        return dp[ind][amount]=ntake+take;



    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(), vector<int>(amount+1, -1));
        return cnt(coins.size()-1, amount,coins, dp);
    }
};
