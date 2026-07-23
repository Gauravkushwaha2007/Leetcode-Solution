class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        for(int i=0; i<prices.size()-1; i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices[i] > prices[j]){
                    continue;
                }
                int curr_profit = prices[j] - prices[i];
                if(curr_profit > max_profit ){
                    max_profit = curr_profit;
                }
            }
        }
        return max_profit;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna