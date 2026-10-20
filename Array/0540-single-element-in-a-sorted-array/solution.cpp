class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int lo=0, hi=n-1;
        if(n==1) return nums[0];
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(mid-1>=0 && mid+1<n && nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1] ){
                return nums[mid];
            }
            else{
                if(mid-1>=0 && nums[mid]==nums[mid-1] && (mid-1-lo)%2==0){
                    lo=mid+1;
                }
                else if(mid+1<n && nums[mid]==nums[mid+1] && (hi-mid+1)%2!=0){
                    lo=mid+2;
                }
                else if(mid-1>=0 && nums[mid]==nums[mid-1] && (mid-1-lo)%2!=0){
                    hi=mid-2;
                }
                else{
                    hi=mid-1;
                }
            }
        }
        return nums[lo];
    }
};
