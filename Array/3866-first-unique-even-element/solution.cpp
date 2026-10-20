class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        vector<int> v;
        map<int,int> mp;
        for(int j=0; j<nums.size(); j++){
            int i=nums[j];
            if(i%2==0){
                if(mp.find(i)!=mp.end()){
                    mp[i]++;
                }
                else{
                    v.push_back(i);
                    mp[i]++;
                }
            }
        }
        for(auto it: v){
            if(mp[it]==1){
                return it;
                
            }
        }
        return -1;
    }
};
