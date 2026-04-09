class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        frequency=Counter(nums)

        h=[]

        for (num, freq) in frequency.items():
            heapq.heappush(h,(freq, num))

            if len(h)>k:
                heapq.heappop(h)

        res=[]

        for freq, num in h:
            res.append(num)

        return res



