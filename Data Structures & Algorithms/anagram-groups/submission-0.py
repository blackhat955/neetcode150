class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        d=defaultdict(list)

        for word in strs:
            key="".join(sorted(word))

            d[key].append(word)

        res=[]

        for val in d.values():
            res.append(val)

        return res