class Solution {
public:

    int getDigit (int num){
        int digit = 0;
        while( num > 0 ){
            digit ++;
            num = num/10;
        }
        return digit;
    }

    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for( int i=0; i<nums.size(); i++){
            int digit = getDigit( nums[i] );

            if( digit % 2 == 0){
                ans++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna