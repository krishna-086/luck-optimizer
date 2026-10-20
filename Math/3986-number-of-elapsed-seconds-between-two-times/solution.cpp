class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        vector<pair<int,int>> v(3);
        int j=0;
        string start="";
        string end="";
        for(int i=0; i<endTime.size(); i++){
            if(endTime[i]==':'){
                v[j].first = stoi(start);
                v[j].second = stoi(end);
                start="";
                end="";
                j++;
                continue;
                
            }
            start+=startTime[i];
            end+=endTime[i];
        }
        v[j].first = stoi(start);
        v[j].second = stoi(end);
        if(v[2].first>v[2].second){
            v[2].second=v[2].second+60;
            v[1].second=v[1].second-1;
        }
        if(v[1].first>v[1].second){
            v[1].second=v[1].second+60;
            v[0].second-=1;
        }
        int hours=v[0].second-v[0].first;
        int min=v[1].second-v[1].first;
        int s=v[2].second-v[2].first;
        return hours*3600+min*60+s;
        
    }
};
