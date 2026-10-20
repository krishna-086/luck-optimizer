class Solution {
public:
    string reverseVowels(string s) {
        set<char> vo = {'a','e','i','o','u','A','E','I','O','U'};
        vector<char> v;
        for(int i=0; i<s.size(); i++){
            if(vo.find(s[i])!=vo.end()){
                v.push_back(s[i]);
            }
        }
        int j=v.size()-1;
        for(int i=0; i<s.size(); i++){
            if(vo.find(s[i])!=vo.end()){
                s[i]=v[j];
                j--;
            }
        }
        return s;
        
    }
};

