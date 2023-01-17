struct Compare {
    bool operator() (pair<int, string> a, pair<int, string> b) {
        if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>um;
        for(auto k:words){
            um[k]++;
        }
        priority_queue<pair<int,string>,vector<pair<int, string>>, Compare>pq;
        for(auto j:um){
            pq.push({j.second,j.first});
        }
        vector<string>ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
            
        }
        
        return ans;
    }
};
