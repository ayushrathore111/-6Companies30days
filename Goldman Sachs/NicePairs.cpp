class Solution {
public:
    int rev(int n){
        int ans= 0,mul=10;
        while(n){
            ans= (n%10)+ans*mul;
            n/=10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int tmp=nums[i]-rev(nums[i]);        
            mp[tmp]++;
            ans=(ans+mp[tmp]-1)%1000000007;      
        }
        return ans%1000000007;
    }
};
