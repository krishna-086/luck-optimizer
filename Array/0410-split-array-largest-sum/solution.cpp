class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=INT_MIN, high=0;
        for(int i=0; i<nums.size(); i++){
             high+=nums[i];
             low=max(low, nums[i]);
        }
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            int sum=nums[0];
            int num=1;
            for(int i=1; i<nums.size(); i++){
                if(sum+nums[i]<=mid){
                    sum+=nums[i];
                }
                else{
                    num++;
                    sum=nums[i];
                }
            }
            if(num>k) low=mid+1;
            else if(num<=k) high=mid-1;
            
        }
        return low;
    }
};
