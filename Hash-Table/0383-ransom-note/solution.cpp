class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size()<ransomNote.size()) return false;
        map<char, int> mp;
        map<char, int> np;
        for(int i=0; i<magazine.size(); i++){
            mp[magazine[i]]++;
            if(i<ransomNote.size()){
                np[ransomNote[i]]++;
            }
        }
        for(auto &it: np){
            if(np[it.first]>mp[it.first]) return false;
            
        }
        return true;
    } 
};
