class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        // vector<vector<string>> ans ;
        unordered_map<string,vector<string>> mp;
        for(int i = 0;i<n;i++)
        {
            vector<int> temp (26,0);
            for(char c:strs[i]){
                temp[c-'a']++;
            }
            string result=to_string(temp[0]);
            for(int j=1;j<26;j++){
                result+=','+to_string(temp[j]);
            }
            mp[result].push_back(strs[i]);

        }
        vector<vector<string>> result;
        for(const auto& pair:mp){
            result.push_back(pair.second);
        }
        return result;
    }
};
