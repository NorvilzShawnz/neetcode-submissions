class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (string& s: strs) {
            string temp = to_string(s.size()) + '#' + s;
            result += temp;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            //Start String : 4#neet
            //e0: 4, e1: #, start:3-5
            //First run; i = 0; j = 1;
            int length = stoi(s.substr(i, j));
            string str = s.substr(j + 1, length);
            result.push_back(str);
            i = j + 1 + length;
        }
        return result;
    }
};
