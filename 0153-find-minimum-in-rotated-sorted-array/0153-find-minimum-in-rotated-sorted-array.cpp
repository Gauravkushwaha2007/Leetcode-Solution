class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0; 
        int end = nums.size()-1;

        while ( st < end ){

            int mid = ( st + end ) / 2;
            if ( nums[mid] > nums [end]) {
                st = mid + 1;
            }
            else {
                end = mid;
            }
        }
        return nums[st];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna