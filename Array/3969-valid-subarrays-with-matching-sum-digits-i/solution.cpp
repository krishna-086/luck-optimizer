class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int c=0, f=0;
        for(int i=0; i<nums.size(); i++){
            long long sum=0;
            for(int j=i; j<nums.size(); j++){
                f=0;
                sum+=1LL*nums[j];
                long long s=sum;
                long long r;
                if(sum%10==x) f++;
                while(s>0){
                    r=s%10;
                    s=s/10;
                    
                }
                if(r==x) f++;
                if(f==2) c++;
            }
        }
        return c;
    }
};
