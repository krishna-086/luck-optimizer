class Solution {
public:
    int findMin(vector<int>& arr) {
        int low=0, high=arr.size()-1, mid;
        int ans=INT_MAX;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[low]<=arr[mid]){
                ans=min(ans, arr[low]);
                low=mid+1;
            }
            else{
                ans=min(ans, arr[mid]);
                high=mid-1;
            }
            
        }
        return ans;
        
    }
};
