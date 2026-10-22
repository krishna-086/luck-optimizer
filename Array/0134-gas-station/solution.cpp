class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank=0, val=0, tot=0, ans=0;
        
        for(int i=0; i<gas.size(); i++){

            val=gas[i]-cost[i];
            tot+=val;
            tank+=val;
            if(tank<0){
                ans=i+1;
                tank=0;
            }
        }
        return tot<0?-1:ans;

    }
};
