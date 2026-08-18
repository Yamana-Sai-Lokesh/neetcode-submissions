class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minval = (2**31)-1
        ans = 0
        for price in prices:
            if price<minval:
                minval = price
            else:
                ans = max(ans,price-minval)
        return ans
        
        