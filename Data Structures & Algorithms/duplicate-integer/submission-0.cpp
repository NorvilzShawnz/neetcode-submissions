class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> numbers;
        for (auto& num : nums) {
            numbers[num]++;
            if (numbers[num] > 1) {
                return true;
            }
        }
        return false;
    }
};
