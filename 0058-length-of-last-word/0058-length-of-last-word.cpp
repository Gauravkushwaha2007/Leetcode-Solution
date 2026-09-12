class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int ptr = s.size()-1;

        while ( !isalnum(s[ptr])){
            ptr--;
        }

        while ( ptr >= 0 && isalnum(s[ptr]) ) {
            count++;
            ptr--;
        }
        return count;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna