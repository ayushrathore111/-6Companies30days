class Solution {
public:
    string longestPrefix(string s) {
        int i = 1, j = 0, n = s.size();
        vector<int> ans(n, 0);
        while(i < n)
        {
            if(s[i] == s[j])
            {
                ans[i] = j+1;
                j++;
                i++;
            }
            else
            {
                if(j > 0)
                {
                    j = ans[j-1];
                }
                else
                {
                    ans[i] = 0;
                    i++;
                }
            }
        }
        int val = ans[n-1];
        return s.substr(0,val);
      //tle at 58 ...
        // unordered_map<string,int>pre;
        // unordered_map<string,int>suff;
        // string temp="";
        // for(int i=0;i<s.length()-1;i++){
        //     temp+= s[i];
        //     pre[temp]=temp.size();
        // }
        // temp="";
        // for(int i=s.length()-1;i>0;i--){
        //     temp+= s[i];
        //     reverse(temp.begin(),temp.end());
        //     suff[temp]=temp.size();
        //     reverse(temp.begin(),temp.end());
        // }
        // string ans="";
        // for(auto i:pre){
        //     if(suff.count(i.first)&&i.second>ans.size()){
        //         ans= i.first;
        //     }
        // }
        // return ans;
    }
};
