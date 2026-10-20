class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> need;
        for(int i=0; i<t.size(); i++){
            need[t[i]]++;
        }
        int rem=t.size();
        int l=0, start=0;
        string ans="";
        int len=INT_MAX;
        for(int r=0; r<s.size(); r++){
            if(need[s[r]]>0){
                rem--;
            }
            need[s[r]]--;
            while(rem==0){
                if(r-l+1<len){
                    len=r-l+1;
                    start=l;
                }
                need[s[l]]++;
                if(need[s[l]]>0) rem++;
                l++;
                
                
            }
        }
        if(len==INT_MAX) return ans;
        for(int i=start; i<start+len; i++){
            ans+=s[i];
        }
        return ans;
    }
};
