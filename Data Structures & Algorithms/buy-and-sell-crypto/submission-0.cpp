class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currProfit;
        int minPrice = 999999;
        int newMaxProf = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

            currProfit = prices[i] - minPrice;
            if (currProfit > newMaxProf) {
                newMaxProf = currProfit;
        }

    }
    return newMaxProf;
    }
};
