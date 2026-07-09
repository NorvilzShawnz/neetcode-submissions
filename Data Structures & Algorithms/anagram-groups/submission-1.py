class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = {}

        for i in strs:
            temp = "".join(sorted(i))
            if temp in mp:
                mp[temp].append(i)
            else:
                mp[temp] = [i]
        return list(mp.values())