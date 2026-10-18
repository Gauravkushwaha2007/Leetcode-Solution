class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() <= 2) return false;

        bool increase = false;
        bool descrease = false;
        bool peak = false;

        for (int i=0; i< arr.size()-1; i++) {
            if(arr[i] == arr[i+1]) return false;
            if(arr[i] < arr[i+1] && !descrease) {
                increase = true;
                continue;
            }
            else if(arr[i] > arr[i+1] && increase ){
                peak = true;
                increase = false;
                descrease = true;
                continue;
            }

            else if (!increase && arr[i] < arr[i+1]) return false;
            else if ( arr[i]>arr[i+1] && peak) {
                // i++;
                descrease = true;
                continue;
            }



            if(i >= arr.size() ) return true;
            return false;
        }

        return (!increase && descrease && peak);

    }
};