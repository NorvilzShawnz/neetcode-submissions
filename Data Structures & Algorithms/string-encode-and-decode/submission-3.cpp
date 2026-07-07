class Solution {
public:

    string encode(vector<string>& strs) {
        string newString;
        for (string s : strs) {
            newString += s + ";";
        } 
        return newString;
    }

    vector<string> decode(string s) {
        vector<string> res;
        stringstream ss(s);
        string word;
        while (getline(ss, word, ';')){
        res.push_back(word);
        }
    return res;
    }   
};
