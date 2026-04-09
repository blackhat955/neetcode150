class Solution:

    def encode(self, strs: List[str]) -> str:
        if len(strs)==0:
            return ""
        elif len(strs)==1 and strs[0]=="":
            return "ruc"
        else:
            return "|".join(strs)

    def decode(self, s: str) -> List[str]:
        if len(s)==0:
            return[]
        if s=="ruc":
            return [""]
        else:
            d=""
            m=[]
            for i in s:
                if i=="|":
                    m.append(d)
                    d=""
                else:
                    d=d+i
            m.append(d)
            return m

        
