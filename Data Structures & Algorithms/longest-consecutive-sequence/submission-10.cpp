class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int n = nums.size();
        if(n==0 || n==1)return n;
        int max_l = 1;
        for(auto x:s){
            // cout<<x<<endl;
            // 1. Checking if there right & no left
            
            if(s.find(x-1)==s.end() && s.find(x+1)!=s.end()){
                x++;
                int curr_len=2;
                while(s.find(x+1)!=s.end()){
                    curr_len++;
                    x+=1;
                }
                max_l=max(curr_len,max_l);
            }
            else{
                continue;
            }
        }
        return max_l;
    }
};
