class Solution:
    def isValid(self, s: str) -> bool:
        res = []

        if len(s) % 2 != 0:
            return False
        
        for x in s:
            if x == "(" or x == "{" or x == "[":
                res.append(x)
            else:
                if len(res) == 0:
                    return False

                if res[-1] == "(" and x== ")":
                    res.pop()
                elif res[-1] == "{" and x == "}":
                    res.pop()
                elif res[-1] == "[" and x == "]":
                    res.pop()
                else:
                    return False
        return len(res) == 0
        