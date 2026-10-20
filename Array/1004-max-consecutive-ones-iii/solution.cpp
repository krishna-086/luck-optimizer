class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, c=0, len=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                c++;
            }
            while(c>k){
                if(nums[l]==0) c--;
                l++;
            }
            len=max(len, i-l+1);
        }
        return len;
    }
};
