class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long count=0;
        long long MOD=1e9+7;
        long long r=k;
        long long Inv2=500000004;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<=r)r=r-nums[i];
            else{
                long long req=nums[i]-r;
                long long n=(req/k)+(req%k==0?0:1);
                r=r+(k*n)-nums[i];
                count+=n;
            }
        }
        return (count%MOD)*((count+1)%MOD)%MOD*Inv2%MOD;
    }
};
