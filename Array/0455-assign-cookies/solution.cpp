class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=g.size()-1;
        int n=0;
        int j=s.size()-1;
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        while(j>=0){
            if(i==-1) break;
            if(s[j]>=g[i]){
                n++;
                j--;
            }
            i--;
        }
        return n;
        
    }
};
