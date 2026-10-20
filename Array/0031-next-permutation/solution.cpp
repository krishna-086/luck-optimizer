class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            } 
        }
        if(ind==-1){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(int j=n-1; j>ind; j--){
                if(nums[ind]<nums[j]){
                    int temp=nums[j];
                    nums[j]=nums[ind];
                    nums[ind]=temp;
                    break;
                }
            }
            reverse(nums.begin()+ind+1, nums.end());
        }
    }
};
