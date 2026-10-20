class Solution {
public:
    int titleToNumber(string columnTitle) {
        string s= columnTitle;
        int ans=0;
        while(!s.empty()){
            int ch=s[0]-'A'+1;
            ans=ans*26 + ch;
            s.erase(s.begin());
        }
        return ans;
    }
};
