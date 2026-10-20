class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0;
        int n=1;
        while(i<arr.size() && k>0){
            if(arr[i]!=n){
                k--;
                i--;
            }
            i++;
            n++;
        }
        while(k>0){
            k--;
            n++;
        }
        return n-1;
        
    }
};
