class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        int c=columnNumber;
        while(c>=1){
            int rem = c%26;
            char ch;
            if(rem!=0){
                ch=rem+'A'-1;
                c/=26;
            } 
            else{
                ch='Z';
                c/=26;
                c-=1;
            }
            res.insert(res.begin(), ch);
            
        }
        return res;

    }
};
