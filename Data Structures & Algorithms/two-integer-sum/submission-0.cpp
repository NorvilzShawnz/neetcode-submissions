class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // hashmap approach.
        unordered_map<int, int>map;
        for (int i = 0; i < nums.size(); i++) {

            int difference = target - nums[i];

            if (map.find(difference) != map.end()) {
                return {map[difference], i};
            }

            map[nums[i]] = i;
        }
        return {};
    }
};

// 4 5 5 
// l   r 
// difference = |target - l + r| 
// 





/*

two pointer approach, would require sorting, and complexity would be nlogn
        int left = 0, right = nums.size()-1;
        int sum;
        while (left != right) {
            sum = nums[left] + nums[right];
            if ( sum == target) {
                return {left, right}
            }
            else if ( sum < target) {
                left++;
            }
        }

*/