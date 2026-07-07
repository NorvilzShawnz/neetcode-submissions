class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //Decided to use a hashmap because of the nature of the problem. a key-value pair could easily help determine duplicate numbers
        std::unordered_map<int, int> numbers;
        //For loop that iterates through the given nums array
        for (auto& num : nums) {
            //This is a little tricky. The purpose of this line is to increase the value for the key pair. For example, this will increase
            //the Key "1" its value by 1. while the start is 0. So this is what we use to increment the number of instances the number appears
            numbers[num]++;
            //This checks to see if the number we are currently on has already been incremented (or found earlier in the array)
            if (numbers[num] > 1) {
            //and it was, return true (duplicate found).
                return true;
            }
        }
        return false;
    }
};
