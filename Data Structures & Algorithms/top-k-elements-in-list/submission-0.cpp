class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        map<int, int> freqNum;

        for (auto& i : nums) {
            freqNum[i]++;
        }




        for (int i = 0;i < k; i++){
        int maxFreq = -1;
        int keyToRemove = -1;
        int keyToAppend = -1;
            for (auto i = freqNum.begin(); i != freqNum.end(); i++) {
            if (i->second > maxFreq) {
                maxFreq = i->second;
                keyToRemove = i->first;
                keyToAppend = i->first;
            }        
            }

        result.push_back(keyToAppend);
        freqNum.erase(keyToRemove);
        }

return result;

    }
};
