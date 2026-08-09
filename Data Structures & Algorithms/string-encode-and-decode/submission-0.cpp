class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto x:strs){
            ans+=to_string(x.size());
            ans+="#";
            ans+=x;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        int n  = s.size();
        while(i<n){
            string temp="";
            int length=0;
            while(s[i]-'0'<=9 && s[i]-'0'>=0)
            {
                length = length*10+(s[i]-'0');
                i++;
            }
            i+=1;
            for(int j=i;j<i+length;j++){
                temp+=s[j];
            }   
            i = i+length;
            ans.push_back(temp);
        }
        return ans;
    }
};
