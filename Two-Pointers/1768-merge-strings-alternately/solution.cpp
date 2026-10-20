class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string m="";
        while(word1[i]!='\0' && word2[i]!='\0'){
            m+=word1[i];
            m+=word2[i];
            i++;
        }
        if(word1[i]=='\0'){
            while(word2[i]!='\0'){
                m+=word2[i];
                i++;
            }
        }
        else if(word2[i]=='\0'){
            while(word1[i]!='\0'){
                m+=word1[i];
                i++;
            }
        }
        return m;
        
    }
};
