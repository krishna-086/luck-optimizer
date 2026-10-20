class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int r=rowIndex;
        vector<int> p;
        p.push_back(1);
        long long j=1;
        for(int i=1; i<=r; i++){
            j*=r-i+1;
            j/=i;
            p.push_back((int)j);
        }
        return p;
    }
};
