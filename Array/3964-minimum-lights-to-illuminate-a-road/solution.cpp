class Solution {
public:
    int minLights(vector<int>& lights) {
        vector<int> ill(lights.size(), 0);
        vector<int> diff(lights.size()+1, 0);
        int n=lights.size();
        int i;
        for(i=0; i<lights.size(); i++){
            if(lights[i]!=0){
                int start=max(0, i-lights[i]);
                int end=min(n-1, i+lights[i]);
                diff[start]++;
                diff[end+1]--;
            }
            
        }
        int curr=0;
        for(i=0; i<lights.size(); i++){
            curr+=diff[i];
            ill[i]=curr;
        }
        int f=0;
        int s, e,l, c=0;
        for(i=0; i<lights.size(); i++){
            if(ill[i]==0 && f==0){
                s=i;
                f++;
            }
            if(f==1 && ill[i]!=0){
                e=i;
                f--;
                l=e-s;
                c+=l/3+(l%3==0?0:1);
            }
        }
        if(ill[i-1]==0){
            l=i-s;
            c+=l/3+(l%3==0?0:1);
        }
        return c;
    }
};
