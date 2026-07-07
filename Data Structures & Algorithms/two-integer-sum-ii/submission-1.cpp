class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         int low, high, currSum;
        low = 0;
        high = numbers.size()-1;
        currSum = 0;

        while (low < high){
        currSum = numbers[low]+numbers[high];
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
