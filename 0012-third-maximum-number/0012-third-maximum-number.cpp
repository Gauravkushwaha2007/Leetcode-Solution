class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstMax = LLONG_MIN; //2
        long long secondMax  = LLONG_MIN; //1
        long long thirdMax = LLONG_MIN;

        for(int i=0; i<nums.size(); i++){
            if( nums[i] == firstMax || nums[i] == secondMax || nums[i] == thirdMax){
                continue;
            }
            if( nums[i] > firstMax ){
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = nums[i];

            }
            else if( nums[i] < firstMax && nums[i] > secondMax ){
                thirdMax = secondMax;
                secondMax = nums[i];
            }
            else if (nums[i] < secondMax && nums[i] > thirdMax ){
                thirdMax = nums[i];
            }
        }
        return ( thirdMax == LLONG_MIN ) ? firstMax : thirdMax;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna