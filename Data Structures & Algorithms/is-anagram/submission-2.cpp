class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(26,0);
        int n = s.size();
        if(s.size()!=t.size())return false;
        for(int i=0;i<n;i++){
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;
        }
        for(int i = 0;i<26;i++){
            if(hash[i]!=0)return false;
        }
        return true;
    }
};
