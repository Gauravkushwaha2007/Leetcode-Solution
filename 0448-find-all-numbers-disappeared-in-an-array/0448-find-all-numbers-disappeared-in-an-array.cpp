class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int expected = 1;
        for (int i = 0; i < nums.size(); i++) {

            while (nums[i] > expected) {
                ans.push_back(expected);
                expected++;
            }

            if (nums[i] == expected) {
                expected++;
            }
        }

        while (expected <= nums.size()) {
            ans.push_back(expected);
            expected++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna