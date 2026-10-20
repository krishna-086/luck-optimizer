
class Solution {
public:
    int c=0;
    void merge(vector<int>& a, int low, int mid, int high){
        int left=low;
        int right=mid+1;
        vector<int> temp;
        while(left<=mid && right<=high){
            if(a[left]<=a[right]){
                temp.push_back(a[left]);
                left++;
            }
            else{
                temp.push_back(a[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(a[left]);
            left++;
            
        }
        while(right<=high){
            temp.push_back(a[right]);
            right++;
        }
        for (int i = low; i <= high; i++){
            a[i] = temp[i - low];
        }
        
    }
    void counter(vector<int>& a, int low, int mid, int high){
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(a[left]>2*(long long)a[right]){
                right++;
            }
            else{
                c+=right-mid-1;
                left++;
            }
        }
        while(left<=mid){
            c+=right-mid-1;
            left++;
        }
    }
    void mergeSort(vector<int>& a, int low, int high){
        if(low>=high) return;
        int mid=(low+high)/2;
        mergeSort(a,low, mid);
        mergeSort(a, mid+1, high);
        counter(a, low, mid, high);
        merge(a, low, mid, high);
        
    }
    int reversePairs(vector<int>& nums) {
        c=0;
        int n=nums.size();
        mergeSort(nums, 0, n-1);
        return c;
    }
};
