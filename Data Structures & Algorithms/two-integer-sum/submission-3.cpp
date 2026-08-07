class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            mp[nums[i]]=i;
        }
        for(int i = 0;i<n;i++){
            int diff = target-nums[i];
            if(mp.count(diff) && mp[diff]!=i){
                return {min(i, mp[diff]), max(i, mp[diff])};
            }
        }
        return {};
    }
};
