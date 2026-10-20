class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int, int>> st;
        int n=t.size();
        for(int i=n-1; i>=0; i-- ){
            int curr=t[i];
            while(!st.empty() && curr>=st.top().first){
                st.pop();
            }
            if(!st.empty()){
                int up=st.top().second;
                t[i]=up-i;
            }
            else{
                t[i]=0;
            }
            st.push({curr,i});
        }
        return t;
    }
};
