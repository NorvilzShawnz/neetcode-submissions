class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;

        for (const auto& entry: nums) {
            m[entry]++;
        }

        //min hep: pair<frequency, number>

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for (auto& entry : m) {
            pq.push({entry.second, entry.first});

            if (pq.size() > k)
                pq.pop();
        }

        vector<int> res;

        while(!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;

    }
};
