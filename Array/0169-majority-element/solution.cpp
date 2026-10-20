class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=nums[0];
        int c=0;
        for(int i=0; i< nums.size(); i++){
            if(c==0) el=nums[i];
            if(nums[i]==el) c++;
            else if(nums[i]!=el) c--;
        }
        if(c>0){
            c=0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==el) c++;
            }
            if(c>nums.size()/2) return el;
        }
        return -1;
    }
};
