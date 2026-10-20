class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());
        map<int, int> mp;
        for(int i=0; i<nums1.size(); i++){
            mp[nums1[i]]=i;
        }
        stack<int> st;
        st.push(nums2[nums2.size()-1]);
        if(mp.find(nums2[nums2.size()-1])!=mp.end()) ans[mp[nums2[nums2.size()-1]]]=-1;
        for(int i=nums2.size()-2; i>=0; i--){
            int curr=nums2[i];
            while(!st.empty() && curr>st.top()){
                st.pop();
            }
            
            if(mp.find(curr)!=mp.end()){
                if(!st.empty()){
                    ans[mp[curr]]=st.top();
                }
                else{
                    ans[mp[curr]]=-1;
                }
            }
            st.push(curr);
        }
        return ans;
    }
};
