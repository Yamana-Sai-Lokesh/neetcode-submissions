class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>> st;
        for(int i = 0;i<n-2;i++){
            // while(i<n-3 && (nums[i]==nums[i+1]) )
            // {
            //     i++;
            // }
            int j=i+1;
            int k = n-1;
            while(j<k){
                //  while(j<n-2 && nums[j]==nums[j+1]){
                //     j++;
                // }
                // while(k>j+1 &&nums[k]==nums[k-1] )
                // {
                //     k--;
                // }

                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    st.insert(temp);
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    k--;
                }

            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};
