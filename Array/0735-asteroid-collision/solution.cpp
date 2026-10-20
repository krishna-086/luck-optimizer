class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i=0; i<asteroids.size(); i++){
            if(st.empty() || asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
                int top=st.top();
                if((abs(asteroids[i])/asteroids[i])==(abs(top)/top)){
                    st.push(asteroids[i]);
                }
                else{
                    while(!st.empty() && top>0 && abs(top)<abs(asteroids[i])){
                        
                        st.pop();
                        if(!st.empty()) top=st.top();
                        
                    }
                    if(st.empty() || top<0) st.push(asteroids[i]);
                    else if (abs(top)==abs(asteroids[i])) st.pop();
                }
            }

        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
