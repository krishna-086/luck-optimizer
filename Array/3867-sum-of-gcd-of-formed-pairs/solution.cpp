class Solution {
public:
    int gd(int a, int b){
        while(a!=0 && b!=0){
            if(a>b){
                int t=b;
                b=a%b;
                a=t;
            }
            else {
                int t=a;
                a=b%a;
                b=t;
            }
            
        }
        if(a==0) return b;
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        vector<int> p;
        int maxi=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            p.push_back(gd(nums[i], maxi));
        }
        sort(p.begin(), p.end());
        int n=nums.size();
        long long s=0;
        for(int i=0; i<n/2; i++){
            int a=p[i];
            int b=p[n-i-1];
            s+=gd(a,b);
            
        }
        return s;
        
    }
};
