class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Map key -> value in nums array, value -> amount of occurences in the array
        map<int,int> m;

        // For loop for array traversal
        for (int i = 0; i < nums.size(); i++) {
            //Nums inside the bracket here marks a key as the values in the array nums using m.
            //Then when we increment using "++" we go from 0 to 1 and the map automatically creates the pairing
            m[nums[i]]++;
        }

        for (const auto& entry : m) {
            if (entry.second > 1) {
                return true;
            } 
        }
        return false;
    }
};