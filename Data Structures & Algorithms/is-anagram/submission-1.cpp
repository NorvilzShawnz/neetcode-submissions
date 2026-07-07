class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> str1;
        map<char,int> str2;

        for (int i = 0; i < s.length(); i++) {
            str1[s[i]]++;
        }

        for (int i = 0; i < t.length(); i++) {
            str2[t[i]]++;
        }
        
        if (str1 == str2) {
            return true;
        }
        else {
            return false;
        }
    }
};
