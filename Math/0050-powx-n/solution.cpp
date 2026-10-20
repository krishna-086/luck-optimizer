class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(x==0) return 0;
        double p=1;
        long long num=n;
        num=num>0?num:-num;
        while(num>0){
            if (num % 2 == 1) {  // If num is odd, multiply by x
                p*= x;
            }
            x *= x;  // Square the base
            num /= 2;
        }
        if(n<0) return 1/p;
        return p;
        
    }
};
