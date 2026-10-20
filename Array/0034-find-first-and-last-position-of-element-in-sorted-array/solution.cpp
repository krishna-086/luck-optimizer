class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=-1;
        int end=-1;
        for(int i=0; i<n; i++){
            if(nums[i]==target && start==-1){
                start=i;
                end=i;
            }
            else if(nums[i]==target){
                end=i;
            }
        }
        vector<int> res={start, end};
        return res;
    }
};
