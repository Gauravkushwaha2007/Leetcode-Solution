class Solution {
public:
    int convertToNumber ( char ch ){
        if ( ch =='I') return 1;
        else if ( ch == 'V' ) return 5;
        else if ( ch == 'X' ) return 10;
        else if ( ch == 'L' ) return 50;
        else if ( ch == 'C' ) return 100;
        else if ( ch == 'D' ) return 500;
        else {
            return 1000; 
        }

    }

    int romanToInt(string s) {
        int ans = 0;
        for ( int i = 0; i < s.size(); i++ ) {
            int num = convertToNumber(s[i]);
            if ( i < s.size()-1 && num < convertToNumber(s[i+1])) {
                ans = ans + (convertToNumber(s[i+1]) - num);
                i++;
                continue;
            }
            ans += num;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna