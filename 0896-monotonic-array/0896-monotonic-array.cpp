class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if( nums.size() == 1) return true;

        // int i = 0;
        // if(nums[0] <= nums[1]){
        //     for ( i ; i < nums.size()-1; i++ ) {
        //         if(nums[i] <= nums[i+1]) continue;
        //         if ( i >= 1 && nums[i] > nums[i+1]) return false;
        //     }
        // }
        // if( i == nums.size()-1) return true;

        // i=0;
        // if(nums[0] >= nums[1]){
        //     for (i; i < nums.size()-1; i++) {
        //         if( nums[i] >= nums[i+1]) continue;
        //         if( i >= 1 && nums[i] < nums[i+1]) return false;
        //     }
        // }

        // if(i == nums.size()-1) return true;
        // return false;
        int i = 0;
        int j = 1;
        for (i; i<nums.size()-1; i++) {
            if(i<=j && nums[i] <= nums[j]){
                j++;
                continue;
            } 
        }
        if(j >= nums.size()) return true;
        i = 0; 
        j = 1;

        for (i; i< nums.size()-1; i++) {
            if(i<=j && nums[i] >= nums[j]){
                j++;
                continue;
            }
        }
        if(j >= nums.size()) return true;
        return false;
    }
};