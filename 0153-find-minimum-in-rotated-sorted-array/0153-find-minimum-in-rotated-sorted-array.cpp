class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0; 
        int j = nums.size()-1;
        int ans = nums[0];

        while ( i <= j)
        {
            if( nums[i] < ans){
                ans = nums[i];
                i++;
            }

            else if ( nums[j] < ans){
                ans = nums[j];
                j--;
            }
            else {
                i++;
                j--;
            }
        }
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna