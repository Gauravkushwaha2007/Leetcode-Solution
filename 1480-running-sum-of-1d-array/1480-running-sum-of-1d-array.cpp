class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = nums[0];
        for(int i=1; i<nums.size(); i++){
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna