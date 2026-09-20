class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0;
        int end = arr.size()-1;
        int ans = st + (end-st)/2;

        while ( st < end ) {
            int mid = st + (end-st)/2;

            if ( arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1] ) {
                return mid;
            }
            if( mid+1 < arr.size() && arr[mid] < arr[mid+1]) {  //right half
                st = mid+1;
            }
            else if ( mid-1 >= 0 && arr[mid-1] > arr[mid]){   //left half
                end = mid;
            }
        
        }
        return ans;
    }
};