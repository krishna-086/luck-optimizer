class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char, int> mp;
        int l=0, mf=0, len=0;
        for(int i=0; i<s.size(); i++ ){
            mp[s[i]]++;
            mf=max(mf, mp[s[i]]);
            if((i-l+1)-mf>k){
                
                mp[s[l]]--;
                l++;
                //mf=0;
                //for(auto it : mp){
                    
                   // mf=max(mf, it.second);
                //}
            }
            len=max(len, i-l+1);

        }
        return len;
    }
};
