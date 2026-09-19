class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0; 
        int end = nums.size()-1;
        while ( st <= end ) {

            int mid = st + (end-st)/2;
            if ( nums[mid] == target ){
                return mid;
            }
            if ( nums[st] <= nums[mid]) {    //left sorted
                if ( target >= nums[st] && target <= nums[mid]) {   //Left me hai  
                    end = mid-1;
                }
                else {
                    st = mid+1;
                }
            }
            else {   //Right sorted
                if ( target >= nums[mid] && target <= nums[end]){
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna