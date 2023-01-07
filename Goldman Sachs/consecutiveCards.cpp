class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>dic;
        int ans=INT_MAX;
        for (int i = 0; i < cards.size(); i++) {
            if (dic.count(cards[i])) {
                ans = min(ans, i - dic[cards[i]] + 1);
            }
            
            dic[cards[i]]=i;
    }
    return ans==INT_MAX?-1:ans;
        // unordered_map<int,int>mp;
        // int n= cards.size();
        // int mini = INT_MAX;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if((cards[i]==cards[j])&&mp.count(cards[i])==0){
        //             mp[cards[i]]= j-i+1;
        //             mini = min(j-i+1,mini);
        //         }
        //     }
        // }
        
        // return mini==INT_MAX?-1:mini;
        
    }
};
