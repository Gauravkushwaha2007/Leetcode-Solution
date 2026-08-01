class Solution {
public:
    void sortColors(vector<int>& nums) {
        int k = 0;
        int i = 0;
        int j = nums.size()-1;
            while( i <= j ){
                if(nums[i] == 0){
                    swap( nums[i] , nums[k]);
                    k++;
                    i++;
                }
                else if (nums[i] == 2){
                    swap ( nums[i], nums[j]);
                    j--;
                }
                else{
                    i++;
                }
            }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna