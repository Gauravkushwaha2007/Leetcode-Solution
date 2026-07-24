class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones = 0; 
        int currOnes = 0;
        for(int i=0; i<nums.size(); i++){

            if(nums[i] == 1){
                currOnes++;
            }
            else{
                currOnes = 0;
            }
            ones = max(currOnes, ones);
        }
        return ones;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna