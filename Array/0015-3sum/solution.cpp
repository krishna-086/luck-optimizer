class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            int k=n-1;
            int j=i+1;
            if(i>0 && nums[i]==nums[i-1]) continue;
            while(j<k){
                if(j>i+1 && nums[j]==nums[j-1]){
                    j++;
                    continue;
                } 
                if(k<n-1 && nums[k]==nums[k+1]){
                    k--;
                    continue;
                }
                long long sum=(long long)nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int> temp={nums[i], nums[j], nums[k]};
                    res.push_back(temp);
                    j++;
                    k--;
                }
                if(sum>0){
                    k--;
                }
                if(sum<0){
                    j++;
                }
            }
        }
        return res;
        

    }
};
