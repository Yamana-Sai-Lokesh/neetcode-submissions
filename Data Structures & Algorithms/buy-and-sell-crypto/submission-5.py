class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # Using two pointer approach
        ans = 0
        i,j=0,1
        while i < len(prices)-1:
            while j<len(prices) and prices[j]>prices[i]:
                ans=max(ans,prices[j]-prices[i])
                j+=1
            else:
                i=j
                j+=1
            # i+=1
        return ans