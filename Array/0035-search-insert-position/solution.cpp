class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high=nums.size()-1, low=0;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        if(target>nums[mid]){
            return mid+1;
        }
        else{
            return mid;
        }

    }
};
