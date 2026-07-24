class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int max_profit = 0;
        int minPrice = prices[0];

        for(int i=0; i<prices.size(); i++){

            if(prices[i] <= minPrice){
                minPrice = prices[i];
            }
            
            int curr_profit = prices[i] - minPrice;

            if( curr_profit > max_profit ){
                max_profit = curr_profit;
            }

        }
        return max_profit;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna