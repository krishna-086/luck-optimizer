class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        int flag=1;
        string t;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(') c++;
            else c--;
            if(c==0){
                flag=1;
                continue;
            }
            if(flag==1){
                flag=0; 
                continue;
            }
            t.push_back(s[i]);
        }
        return t;
    }
};
