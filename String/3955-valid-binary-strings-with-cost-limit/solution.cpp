class Solution {
public:
    vector<string> generateValidStrings(int n, int k) {
        int num=pow(2,n)-1;
        string t;
        for(int i=0; i<n; i++ ){
            t.push_back('0');
        }
        vector<string> res;
        res.push_back(t);
        for(int i=1; i<=num; i++){
            string temp=t;
            int j=0;
            int a=i;
            int sum=0;
            int f=0;
            int r1=2;
            while(a!=0){
                int r=a%2;
                int a1=a;
                a=a/2;
                
                if(r==r1 && r==1){
                    f=1;
                    break;
                }
                if(r==1){
                    sum+=temp.size()-j-1;
                }
                if(sum>k){
                    f=1;
                    break;
                }
                r1=a1%2;
                temp[temp.size()-j-1]=r+'0';
                j++;
            }
            if(f==0){
                res.push_back(temp);
            }
        }
        return res;
    }
};
