class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return 0;
        sort(nums.begin(),nums.end());

        int max_length=1;
        vector<int> diff(nums.size());
        diff[0]=nums[0];
        // int n = nums.size();
        for(int i=1;i<nums.size();i++){
            diff[i]=nums[i]-nums[i-1];
        }
        for(int i = 1;i<n;i++){
            int curr_len=1;
            while((i<n )&& (diff[i]==0 || diff[i]==1))
            {
                curr_len+=diff[i];
                i++;
            }
            max_length = max(curr_len,max_length);
        }
        return max_length;

    }
};
