class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s=1;
        int p=1;
        int n= nums.size();
        vector<int> answer(n,1);
        for(int i=0; i<n; i++){
            answer[i]=p;
            p*=nums[i];
        }
        for(int j=n-1; j>=0; j--){
            answer[j]*=s;
            s*=nums[j];
        }
        return answer;
        
    }
};
