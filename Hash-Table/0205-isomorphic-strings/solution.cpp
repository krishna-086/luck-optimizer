class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        map<char, char> mp;
        map<char, int> ch;
        for(int i=0; i<s.size(); i++){
            if(!mp.empty() && mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return false;
            }
            else{
                if(ch[t[i]]==0){
                    ch[t[i]]=1;
                    mp[s[i]]=t[i];
                }
                else return false;
                
            }
        }
        return true;
    }
};
