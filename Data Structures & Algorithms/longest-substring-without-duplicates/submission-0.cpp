class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> sett;
        int left = 0, right = 0;
        int maxLen = 0;

        for (int right = 0; right < s.length(); right++){
            while(sett.find(s[right]) != sett.end()) {
                sett.erase(s[left]);
                left += 1;
            }

            sett.insert(s[right]);
            maxLen = max(maxLen, right - left +1);
        }
    return maxLen;
    }

};
