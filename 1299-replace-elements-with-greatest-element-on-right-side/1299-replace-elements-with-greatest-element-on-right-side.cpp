class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int maxElement = arr[arr.size()-1];
        for ( int i = arr.size()-2; i >= 0; i--) {

            int currElement = arr[i];

            arr[i] = maxElement;
            maxElement = max(maxElement, currElement);
        }
        arr[arr.size()-1] = -1;
        return arr;
    }
};