class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum=0;
        mp[0]=1;
        int c=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            int x=sum-k;
            if(mp.find(x)!=mp.end()){
                c+=mp[x];
            }
            mp[sum]++;
        }
        return c;
    }
};
