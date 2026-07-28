class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged( nums1.size() + nums2.size() , 0 );
        merge( nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin() );

        if( merged.size() %2 == 0  ){ // EVEN CASE
            return ( merged[merged.size()/2] + merged[(merged.size()/2) - 1] ) /2.0;
        }
        // ODD CASE
        return merged[merged.size() /2] ;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna