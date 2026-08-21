class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(auto price : prices){
            if(price > minPrice) maxProfit = max(maxProfit, price - minPrice);
            else minPrice = min(price, minPrice);

            
        }

        return maxProfit;
    }
};
