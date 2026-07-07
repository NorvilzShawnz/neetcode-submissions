class Solution {
public:
    bool isPalindrome(string s) {
    string tempstr;
    for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                tempstr+= tolower(s[i]);
            }
        }

        std::cout<<tempstr;
        int l = 0, r = tempstr.length()-1;
        while (l < r) {
            if (tempstr[l] != tempstr[r]) {
                return false;
            }
            else  {
                l++;
                r--;
            }
        }
        return true;
    }
};
