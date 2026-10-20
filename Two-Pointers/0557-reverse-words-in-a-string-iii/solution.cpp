class Solution {
public:
    void Rev(string& s, int start, int end){
        while(start<=end){
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    }
    string reverseWords(string s) {
        int start=0;
        int i;
        for(i=0; i<s.size(); i++){
            if(s[i]==' '){
                Rev(s, start, i-1);
                start=i+1;
            }
        }
        Rev(s,start, i-1);
        return s;
    }
};
