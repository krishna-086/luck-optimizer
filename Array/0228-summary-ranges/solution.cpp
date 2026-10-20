class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> s;
        int start=0;
        int l=0;
        while(l<nums.size()){
            if(l + 1 < nums.size() && nums[l]+1==nums[l+1]){
                l++;
            }
            else{
                if(l==start){
                    s.push_back(to_string(nums[start]));
                }
                else{
                    s.push_back(to_string(nums[start])+ "->"+ to_string(nums[l]));
                }
                l++;
                start=l;
            }
        }
        return s;
    }
};
