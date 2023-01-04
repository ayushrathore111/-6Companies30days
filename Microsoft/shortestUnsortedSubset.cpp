class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp;
        temp = nums;
        sort(temp.begin(),temp.end());
        int n = nums.size();
        int i=0,j=n-1;
       //find left idx..
        for(;i<n;i++)
        {
            if(nums[i]!=temp[i])
                break;
        }
       //find right idx..
        for(;j>=0;j--)
        {
            if(nums[j]!=temp[j])
                break;
        }
        int c=0;
        //find the no. of elements..
        for(int k=i;k<=j;k++)
            c++;
        return c;
        //naive approach
//         stack<int>st;
//         bool flag=false;
//         int s=-1,val=0;
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]>nums[i+1]){
//                 flag = true;
//                 if(s==-1){
//                     s=i;
//                     val=nums[i+1];
//                }
               
//                 st.push(i+1);
//             }
//             else if(val>=nums[i+1]){
//                    st.push(i+1);
//                }
//         }
//         if(flag==false){
//             return 0;
// }
//         int e= st.top();
//         return e-s+1;
    }
};
