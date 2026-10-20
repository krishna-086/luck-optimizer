class Solution {
public:
    vector<string> createGrid(int m, int n) {
        //vector<vector<string>> res(m, vector<string>(n, '#'));
        vector<string> res;
        
        for(int i=0; i<m; i++){
            string temp="";
            for(int j=0; j<n; j++){
                if(i==0 || j==n-1){
                    temp+='.';
                }
                else{
                    temp+='#';
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
