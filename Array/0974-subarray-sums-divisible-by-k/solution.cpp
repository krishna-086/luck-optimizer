class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int, int> p;
        int sum=0;
        int c=0;
        p[0]=1;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            int r=((sum%k)+k)%k;
            if(p.find(r)!=p.end()){
                c+=p[r];
            }
            p[r]++;
        }
        return c;
    }

    
};
