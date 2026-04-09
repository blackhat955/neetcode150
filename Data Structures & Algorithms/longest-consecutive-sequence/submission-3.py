class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:

        if len(nums)==0:
            return 0

        seen=set(nums)
        
        maxVal=0

        for val in seen:
            if val-1 not in seen:
                curr=val 
                count=1 

                while curr+1 in seen:
                    curr+=1
                    count+=1
                maxVal=max(maxVal, count)

        
        return maxVal




        