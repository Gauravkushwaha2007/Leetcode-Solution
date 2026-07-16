class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> freq(10, 0);

        while (n > 0) {
            freq[n % 10]++;
            n /= 10;
        }

        int ans = -1;
        int mini = INT_MAX;

        for (int i = 0; i <= 9; i++) {
            if (freq[i] > 0 && freq[i] < mini) {
                mini = freq[i];
                ans = i;
            }
        }

        return ans;
    }
};