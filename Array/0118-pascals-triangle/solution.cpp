class Solution {
public:
    vector<int> genRows(int row){
        int ans=1;
        vector<int> temp;
        temp.push_back(ans);
        for(int i=1; i<row; i++){
            ans=ans*(row-i);
            ans=ans/i;
            temp.push_back(ans);
        }
        return temp;
    }

    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> res;
        for(int i=1; i<=n; i++){
            res.push_back(genRows(i));
        }
        return res;
    }
};






/*class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> res(n);
        for(int i=0; i<n; i++){
            int ans=1;
            res[i].push_back(ans);
            for(int j=1; j<=i; j++){
                ans=ans*(i-j+1);
                ans=ans/j;
                res[i].push_back(ans);
            }
        }
        return res;
    }
};*/
