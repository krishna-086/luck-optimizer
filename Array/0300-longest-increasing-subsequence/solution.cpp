class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> prev(n+1,0), curr(n+1,0);
        for(int j=0; j<=n; j++){
            prev[j]=(j==n || nums[0]<nums[j]) ? 1 : 0;
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<=n; j++){
                int ntake=prev[j];
                int take=0;
                if(j==n || nums[i]<nums[j]) take=1+prev[i];
                curr[j]=max(ntake, take);
            }
            prev=curr;
        }
        return prev[n];
    }
};
