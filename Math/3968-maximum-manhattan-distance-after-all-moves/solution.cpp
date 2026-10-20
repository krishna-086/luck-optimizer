class Solution {
public:
    int maxDistance(string moves) {
        int x=0, y=0;
        int c=0;
        for(int i=0; i<moves.size(); i++){
            if(moves[i]=='U'){
                y++;
            }
            else if(moves[i]=='D'){
                y--;
            }
            else if(moves[i]=='L'){
                x--;
            }
            else if(moves[i]=='R'){
                x++;
            }
            else{
                c++;
            }
            
        }
        if(x<0) x=-x;
        if(y<0) y=-y;
        int ans=x+y+c;
        return ans;
    }
};
