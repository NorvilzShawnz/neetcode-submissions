class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //create map to bind key string to sort value of the string
        map<string, vector<string>>m;

        for (const auto& entry: strs) {
            string tmp = entry;
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(entry);
        }


        vector<vector<string>> res;

        for (const auto& s : m) {
            res.push_back(s.second);
        }

        return res;
    }
};
