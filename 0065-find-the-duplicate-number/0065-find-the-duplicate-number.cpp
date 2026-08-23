class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0]; // 2
        int fast = nums[0]; // 2

        
        do{
            slow = nums[slow]; // 7
            fast = nums[nums[fast]]; // 7
        } while ( slow != fast);


        slow = nums[0];

        while ( slow != fast) {
            slow = nums[slow]; // 9
            fast = nums[fast]; // 9
        }
        return slow;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna