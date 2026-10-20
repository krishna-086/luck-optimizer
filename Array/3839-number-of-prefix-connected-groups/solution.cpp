class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        map<string, int> mp;
        for(int i=0; i<words.size(); i++){
            if(words[i].size()<k) continue;
            string t="";
            for(int j=0; j<k; j++){
                t+=words[i][j];
            }
            mp[t]++;
        }
        int count=0;
        for(auto it: mp){
            if(it.second>=2){
                count++;
            }
        }
        return count;
        
    }
};
