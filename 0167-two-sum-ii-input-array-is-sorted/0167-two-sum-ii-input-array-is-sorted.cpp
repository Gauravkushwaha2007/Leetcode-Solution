class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size()-1;
        vector <int> ans;
        while( i <= j){
            if( numbers[i] + numbers[j] == target ){
                ans = {i+1,j+1};
                return ans;
            }
            else if ( numbers[i] + numbers[j] < target ){
                i++;
            }
            else if( numbers[i] + numbers[j] > target){
                j--;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna