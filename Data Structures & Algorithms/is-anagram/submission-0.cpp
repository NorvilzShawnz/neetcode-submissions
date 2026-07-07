class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> string1;
        std::unordered_map<char, int> string2;

        for (auto& c : s) {
            string1[c]++;
        }

        for (auto& c : t) {
            string2[c]++;
        }

        if (string1 == string2) {
            return true;
        }
        
        return false;
    }
};
