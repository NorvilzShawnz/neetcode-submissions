class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        auto low = 0;
        auto high = numbers.size()-1;

        while (low < high){
        const auto currSum = numbers[low]+numbers[high];
        if (currSum == target) {
            return {low+1 , high+1};
        }
            
        if (currSum < target) {
                
                low += 1;
            }
        else  {
                high -= 1;
            }
        
        }
        return {};
         
    }
};
