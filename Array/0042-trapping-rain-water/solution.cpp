class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        int c=0;

        int mx=0;
        for(int j=1; j<n; j++){
            if(nums[j]>nums[mx]) mx=j;
        }

        int i=0;
        for(int j=i+1; j<=mx; j++){
            if(nums[j]>=nums[i]){
                int len=j-i+1;
                int loc=j;
                int ar=nums[i]*len-nums[i];
                for(int k=0; k<len-1; k++){
                    ar-=nums[loc-k-1];
                }
                c+=ar;
                i=j;
            }
        }

        i=n-1;
        for(int j=i-1; j>=mx; j--){
            if(nums[j]>=nums[i]){
                int len=i-j+1;
                int loc=j;
                int ar=nums[i]*len-nums[i];
                for(int k=0; k<len-1; k++){
                    ar-=nums[loc+k+1];
                }
                c+=ar;
                i=j;
            }
        }

        return c;
    }
};
