class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numofzeros =0;
        long int produ = 1;
        int ind ;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){numofzeros++;ind = i;}
            if(nums[i]!=0)produ*=nums[i];
        }
        vector<int> ans(nums.size(),0);
        if(numofzeros==0){
            for(int i = 0;i<nums.size();i++){
                ans[i]=produ/nums[i];
            }
            return ans;
        }
        else if(numofzeros==1){
            ans[ind]=produ;
            return ans;
        }
        else{
            return ans;
        }
        return ans;
    }
};
