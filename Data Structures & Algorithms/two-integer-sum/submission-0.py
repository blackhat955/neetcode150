class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d=defaultdict(int)

        for i in range(len(nums)):
            remain=target-nums[i]
            if remain in d:
                return [d[remain], i]
            d[nums[i]]=i
            
        return -1
        