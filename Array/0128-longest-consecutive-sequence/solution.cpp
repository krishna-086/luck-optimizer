class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==0) return 0;
        int lon=1;
        int count;
        unordered_set<int> s(nums.begin(), nums.end());
        for(auto it: s){
            if(s.find(it-1)!=s.end()){
                continue;
            }
            int x=it;
            count=1;
            while(s.find(x+1)!=s.end()){
                count++;
                x++;
            }
            lon=max(lon, count);
        }
        return lon;


        /*sort(nums.begin(), nums.end());
        
        int curr=1;
        int lon=1;
        int last=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]+1){
                curr++;
                last=nums[i];
            }
            else if(nums[i]==nums[i-1]){

            }
            else {
                lon=max(curr,lon);
                curr=1;
            }
        }
        lon=max(curr, lon);
        return lon;*/
    }
};
