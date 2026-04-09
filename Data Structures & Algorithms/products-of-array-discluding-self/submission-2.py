class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        count=0

        for num in nums:
            if num==0:
                count+=1

        if count>=2:
            return [0]*len(nums)
            
        res=[]
        for i in range(len(nums)):
            ans=1
            for j in range(len(nums)):
                if j==i:
                    continue
                ans*=nums[j]

            res.append(ans)
                

        return res
        