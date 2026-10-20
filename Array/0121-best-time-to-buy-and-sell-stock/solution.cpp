class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int profit;
        int mini=prices[0];
        for(int i =1; i<prices.size(); i++){
            profit=prices[i]-mini;
            maxp=max(maxp, profit);
            mini=min(mini, prices[i]);
        }
        return maxp;
    }
};
