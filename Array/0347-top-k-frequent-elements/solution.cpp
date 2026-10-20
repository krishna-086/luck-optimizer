class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res(k);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int l=k;
        for(auto a: mp){
            k--;
            int freq=a.second;
            int ele=a.first;
            if(k>=0){
                pq.push({freq, ele});
            }
            else if(freq>pq.top().first){
                pq.pop();
                pq.push({freq, ele});
            }
        }
        for(int i=l-1; i>=0; i--){
            res[i]=pq.top().second;
            pq.pop();
        }
        return res;
    }
};
