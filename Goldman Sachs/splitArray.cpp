class Solution {
public:
    bool isPossible(vector<int>& nums) {
        map<int,int>avail;
        map<int,int>vacnt;
        for(auto i:nums){
            avail[i]++;
        }
        for(auto i:nums){
            if(avail[i]==0)continue;
            else if(vacnt[i]>0){
                vacnt[i]--;
                vacnt[i+1]++;
                avail[i]--;
            }
            else if(avail[i]>0&&avail[i+1]>0&&avail[i+2]>0){
                avail[i]--;
                avail[i+1]--;
                avail[i+2]--;
                vacnt[i+3]++;
            }
            else{
                return false;
            }


        }
        return true;
    }
};
