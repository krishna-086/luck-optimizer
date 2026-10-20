class Solution {
public:
    void reverse(string& s, int start, int end) {
        while (start < end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }

    string reverseWords(string s) {
        int n=s.size();
        reverse(s,0,n-1);
        string st="";
        int j=0;
        int flag=1;
        int start=0;
        for(int i=0; i<n; i++){
            if(s[i]==' '){
                if(flag==0){
                    reverse(st, start, j-1);
                    st+=' ';
                    j++;
                    flag=1;
                    continue;
                }
                flag=1;
                continue;
            }
            if(flag==1) start=j;
            st+=s[i];
            j++;
            flag=0;
        }
        if (flag == 0) {
            reverse(st, start, j - 1);
        }

        n=st.size();
        if(st[n-1]==' '){
            st.pop_back();

        }
        return st;
    }
};
