class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            auto it = mp.find(c);
            if(it==mp.end() || it->second==0){
                return false;
            }
            it->second --;
        }
    }
};
