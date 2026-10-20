class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        // vector<int> l(h.size());
        // vector<int> r(h.size());
        int maxi=INT_MIN;
        // for(int i=0; i<h.size(); i++){
        //     while(!st.empty() && h[st.top()]>=h[i]){
        //         st.pop();
        //     }
        //     l[i]=st.empty()?-1:st.top();
        //     st.push(i);
        // }
        // stack<int>().swap(st);
        // for(int i=h.size()-1; i>=0; i--){
        //     while(!st.empty() && h[st.top()]>=h[i]){
        //         st.pop();
        //     }
        //     r[i]=st.empty()?h.size():st.top();
        //     st.push(i);
        // }
        // for(int i=0; i<h.size(); i++){
        //     int w=r[i]-l[i]-1;
        //     int area=w*h[i];
        //     maxi=max(maxi, area);
        // }
        int ele;
        int area;
        st.push(-1);
        for(int i=0; i<h.size(); i++){
            while(!st.empty() && st.top()!=-1 && h[st.top()]>=h[i] ){
                ele=st.top();
                st.pop();
                area=(i-st.top()-1)*h[ele];
                maxi=max(maxi, area);
            }
            st.push(i);
        }
        while(!st.empty() && st.top()!=-1){
            ele=st.top();
            st.pop();
            area=(h.size()-st.top()-1)*h[ele];
            maxi=max(maxi, area);
        }
        return maxi;

    }
};
