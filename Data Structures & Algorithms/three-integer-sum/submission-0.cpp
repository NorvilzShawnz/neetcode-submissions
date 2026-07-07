class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        auto n = size(nums);
        vector<vector<int>> res;
        set<vector<int>> st;

        // Sort numbers to setup two pointer checker
        sort(nums.begin(), nums.end());
        //Static integer to prevent n^3 time complexity
        for (int i = 0 ;i < n ; i ++) {
            // Two pointers 
            int j = i+1, k = n-1;
            //While they haven't crossed paths yet
            while ( j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    //Store values in a set because duplicate values are ignored for this specific case
                    st.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                }
                else if (sum < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }

        for (auto const& triplets: st) {
            res.push_back(triplets);
        }
        return res;
    }
};
