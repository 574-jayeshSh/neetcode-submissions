class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int best_price = 0;

        for(int i = 0; i<prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            int profit = prices[i] - minPrice;

            best_price = max(best_price, profit);
        }

        return best_price;
    }
};
