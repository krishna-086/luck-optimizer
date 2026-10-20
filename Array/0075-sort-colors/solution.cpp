class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int med=0;
        int high=nums.size();
        while(med<=high-1){
            if(nums[med]==0){
                int temp=nums[med];
                nums[med]=nums[low];
                nums[low]=temp;
                low++;
                med++;
            }
            else if(nums[med]==1){
                med++;
            }
            else if(nums[med]==2){
                int temp=nums[med];
                nums[med]=nums[high-1];
                nums[high-1]=temp;
                high--;

            }
        }
        
    }
};
