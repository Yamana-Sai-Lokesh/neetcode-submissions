class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            int sm=nums[i]+nums[j];
            if(sm>target){
                j--;
            }
            else if(sm<target){
                i++;
            }
            else{
                return {i+1,j+1};
            }
        }
        return {};
    }
};
