class Solution {
public:
    bool isAnagram(string s, string t) {
        // Want to map character frequency to a string
        map<char, int> str1;
        map<char, int> str2;


        for (const auto& key : s) {
            str1[key]++;
        }

        for (const auto& entry : t) {
            str2[entry]++;
        }

        if (str1 == str2) {
            return true;
        }

        return false;
    }
};
