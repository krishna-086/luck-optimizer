class Solution {
public:
    int mySqrt(int x) {
        int i;
        if(x==0 || x==1) return x;
        for(i=1; i<=x/2; i++){
            long int num =(long int)i*i;
            if(num>x){
                break;
            }

        }
        return i-1;
    }
};
