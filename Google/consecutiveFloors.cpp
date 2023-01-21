class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        int maxi = 0,k =special[0];
        maxi = max(maxi,special[0]-bottom);
        for(int i=1;i<special.size();i++){
            maxi = max(maxi,special[i]-k-1);
            k = special[i];
        }
        maxi = max(maxi,top-special[special.size()-1]);
        
        return maxi;
    }
};
