class Solution {
public:
    bool isPalindrome(string s) {
        int left, right;

        string justString;
        for (const auto& c : s) {
            if (isalnum(c)) {
                justString += c;
            }
        }

        left= 0;
        right = justString.size()-1;
        
        while (left < right) {
            if (tolower(justString[left]) != tolower(justString[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;

    }
};
