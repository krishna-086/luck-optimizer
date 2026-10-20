class Solution {
public:
    bool consecutiveSetBits(int n) {
        int r,r1=2,n1;
        int c=0, c1=0;
        while(n!=0){
            r=n%2;
            n1=n;
            n=n/2;
            if(r==r1 && r==1) c++;
            r1=n1%2;
        }
        if(c==1) return true;
        
        return false;
        
    }
};
