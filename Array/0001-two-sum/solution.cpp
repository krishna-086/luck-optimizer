class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        vector<int> result;
        mpp[nums[0]]=0;
        for(int i=1; i< nums.size(); i++){
            int more=target-nums[i];
            if(mpp.find(more)!=mpp.end()){
                result.push_back(mpp[more]);
                result.push_back(i);
            }
            mpp[nums[i]]=i;
        }
        return result;
        
    }
};
