class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size())return false;
        unordered_map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        for(auto y : t){
            if(mp[y]==0)return false;
            mp[y]--;
        }
        return true;
    }
};
