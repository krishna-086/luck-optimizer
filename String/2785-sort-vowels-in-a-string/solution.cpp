class Solution {
public:
    string sortVowels(string s) {
        set<char> vo={'a','e','i','o','u','A','E','I','O','U'};
        vector<char> v;
        for(int i=0; i<s.size(); i++){
            if(vo.find(s[i])!=vo.end()){
                v.push_back(s[i]);
            }
        }
        sort(v.begin(), v.end());
        int j=0;
        for(int i=0; i<s.size(); i++){
            if(vo.find(s[i])!=vo.end()){
                s[i]=v[j];
                j++;
            }
        }
        return s;
        
    }
};
