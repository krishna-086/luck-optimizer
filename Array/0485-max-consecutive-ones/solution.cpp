class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int curr=0;
        int max=0;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                curr++;
            }
            else if(nums[i]==0){
                if(max<curr){
                    max=curr;
                }
                curr=0;
            }

        }
        
        return max<curr?curr:max;
        
    }
};
