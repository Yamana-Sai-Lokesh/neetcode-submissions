class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> count(n+1);
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            count[x.second].push_back(x.first);
        }
        vector<int> ans;
        for(int i = n;i>0;i--)
        {
            for(auto x:count[i]){
                ans.push_back(x);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return {};
    }
};
