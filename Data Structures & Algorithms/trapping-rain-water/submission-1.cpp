class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0) return 0 ;

        int l=0;
        int r = height.size()-1;
        int lmax = height[l];
        int rmax = height[r];
        int res = 0;
        while(l<r){
            if(lmax<rmax){
                l++;
                if(lmax>height[l]){
                    res+=lmax-height[l];
                }

                lmax = max(lmax,height[l]);
                
            }
            else{
                r--;
                if(rmax>height[r]){
                    res+=rmax-height[r];
                }
                rmax = max(rmax,height[r]);
                
            }

        }
        return res;
    }
};
