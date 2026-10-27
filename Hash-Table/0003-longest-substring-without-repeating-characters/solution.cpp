class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;
        int l=0, r=0, len=0;
        for(int i=0; i<s.size(); i++){
            while(mp.find(s[i])!=mp.end()){
                mp.erase(s[l]);
                l++;
                
            }
            
            len=max(len, r-l+1);
            mp.insert(s[i]);
            r++;
            
        }
        return len;
    }
};
