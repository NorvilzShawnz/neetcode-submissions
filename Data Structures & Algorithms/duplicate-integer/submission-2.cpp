class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> intVar;

        for (int i = 0; i < nums.size(); i++) {
            intVar[nums[i]]++;
        }

        for (const auto& value : intVar) {
            if (value.second > 1) {
                return true;
            }
    }
    return false;
    }
};