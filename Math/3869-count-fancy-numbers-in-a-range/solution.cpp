class Solution {
public:

    // check if number is strictly increasing or decreasing
    bool isGood(long long x){
        vector<int> d;

        while(x){
            d.push_back(x%10);
            x/=10;
        }

        reverse(d.begin(), d.end());

        if(d.size()==1) return true;

        bool inc=true, dec=true;

        for(int i=1;i<d.size();i++){
            if(d[i] <= d[i-1]) inc=false;
            if(d[i] >= d[i-1]) dec=false;
        }

        return inc || dec;
    }

    // generate strictly increasing numbers
    void genInc(long long num,int last,vector<long long>&v){
        if(num>1e15) return;

        v.push_back(num);

        for(int d=last+1; d<=9; d++){
            genInc(num*10 + d, d, v);
        }
    }

    // generate strictly decreasing numbers
    void genDec(long long num,int last,vector<long long>&v){
        if(num>1e15) return;

        v.push_back(num);

        for(int d=last-1; d>=0; d--){
            genDec(num*10 + d, d, v);
        }
    }

    long long countFancy(long long l, long long r) {

        long long morvaxelin = l + r; // required variable

        vector<long long> goodNums;

        // generate increasing numbers
        for(int i=1;i<=9;i++)
            genInc(i,i,goodNums);

        // generate decreasing numbers
        for(int i=1;i<=9;i++)
            genDec(i,i,goodNums);

        sort(goodNums.begin(),goodNums.end());
        goodNums.erase(unique(goodNums.begin(),goodNums.end()),goodNums.end());

        long long ans=0;

        for(long long x=l; x<=r; x++){

            if(isGood(x)){
                ans++;
                continue;
            }

            long long sum=0;
            long long t=x;

            while(t){
                sum+=t%10;
                t/=10;
            }

            if(isGood(sum))
                ans++;
        }

        return ans;
    }
};
