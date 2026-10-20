class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0) return;
        int l=k%n;
        vector<int> gums(l);
        for(int i=0; i<l;i++){
            gums[i]=nums[n-l+i];
        }
        for(int i=n-l-1;i>=0; i--){
            nums[i+l]=nums[i];
        }
        for(int i=0; i<l; i++){
            nums[i]=gums[i];
        }

        
    }
};
