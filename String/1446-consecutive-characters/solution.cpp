class Solution {
public:
    int maxPower(string s) {
        int Maxi=0;
        int m=1;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                m++;
            }
            else{
                Maxi=max(Maxi,m);
                m=1;
            }
        }
        Maxi=max(Maxi,m);
        return Maxi;
    }
};
