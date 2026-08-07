class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(26,0);
        int n = s.size();
        if(s.size()!=t.size())return false;
        for(int i=0;i<n;i++){
            hash[s[i]-'a']++;
        }
        for(int i = 0;i<n;i++){
            if(hash[t[i]-'a']==0)return false;
            hash[t[i]-'a']--;
        }
        return true;
    }
};
