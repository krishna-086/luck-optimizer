class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size(), mx=0, pos=0;
        vector<int> f(26,0);
        for(char c:s) f[c-'a']++;
        for(int i=1;i<26;i++) if(f[i]>f[mx]) mx=i;
        if(f[mx]>(n+1)/2) return "";
        string res(n,' ');
        while(f[mx]>0){
            res[pos]='a'+mx;
            f[mx]--;
            pos+=2;
            if(pos>=n) pos=1;
        }
        for(int i=0;i<26;i++){
            while(f[i]>0){
                res[pos]='a'+i;
                f[i]--;
                pos+=2;
                if(pos>=n) pos=1;
            }
        }
        return res;
    }
};
