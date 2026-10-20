class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        dp1[0]=nums[0];
        dp2[0] = 0;
        dp2[1] = nums[1];
        
        for(int i=1; i<n-1; i++){
            int take=nums[i]+((i>1)?dp1[i-2]:0);
            int ntake=dp1[i-1];
            dp1[i]=max(take,ntake);
        }
        for(int i=2; i<n; i++){
            int take=nums[i]+dp2[i-2];
            int ntake=dp2[i-1];
            dp2[i]=max(take,ntake);
        }
        return max(dp1[n-2], dp2[n-1]);
    }
};
