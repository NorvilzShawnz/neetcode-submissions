class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        freq = {}
        longest = 0
        left = 0
        maxFreq = 0
        
        for right in range(len(s)):
            c = s[right]
            freq[c] = freq.get(c,0) +1
            maxFreq = max(maxFreq, freq[c])
            window_length = right - left +1
            while (window_length - maxFreq > k):
                freq[s[left]]-=1
                left+=1
                window_length = right - left +1
            longest = max(longest,window_length)
        return longest

        

        



            