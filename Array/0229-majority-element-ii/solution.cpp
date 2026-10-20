/*class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mp;
        vector<int> res;
        int n = nums.size()/3 + 1;
        int i;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==n){
                res.push_back(nums[i]);
            }
            if(res.size()==2) break;
        }
        return res;
    }
};*/


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int c1=0, c2=0, el1, el2;
        for(int i=0; i< nums.size(); i++){
            if(c1==0 & nums[i]!=el2){
                c1++;
                el1=nums[i];
            }
            else if(c2==0 & nums[i]!=el1){
                c2++;
                el2=nums[i];
            }
            else if(nums[i]==el1){
                c1++;
            }
            else if(nums[i]==el2){
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0, c2=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==el1) c1++;
            else if(nums[i]==el2) c2++;
        }
        if(c1>nums.size()/3) res.push_back(el1);
        if(c2>nums.size()/3) res.push_back(el2);
        return res;
    }
};
