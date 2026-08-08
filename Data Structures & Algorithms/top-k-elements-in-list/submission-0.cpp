class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {   
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i = 0;i<n;i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> numbFreq(freq.begin(),freq.end());
        sort(numbFreq.begin(),numbFreq.end(),[](const auto& a,const auto& b){return a.second>b.second;});
        vector<int> ans;
        for(int i = 0;i<k;i++){
            ans.push_back(numbFreq[i].first);
        }
        return ans;
        
    }
};
