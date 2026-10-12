class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};




class Solution {
    public: 
    vector<int> plusOne(vector<int> nums) {
        int n = nums.size();
        if(nums[n-1] < 9 ) {
            nums[n-1] += 1;
            return nums;
        }
        
        int i = n-1;
        while(i >= 0 && nums[i] == 9 ) {
            nums[i] = 0;
            i--;
        }
        if(i >= 0 ) {
            nums[i] += 1;
            return nums;
        } 
        else if (i < 0) {
            nums.insert(nums.begin(), 1);
            return nums;
        }
        return nums;
    }
};
