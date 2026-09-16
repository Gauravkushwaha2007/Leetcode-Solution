class Solution {
public:

    bool isVowel ( char ch ) {
        ch = tolower(ch);
        if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {

        int st = 0, end = s.size()-1;
        while ( st < end ) {
            while ( st < end && !isVowel(s[st]) ) {
                st++;
            }
            while ( st < end && !isVowel(s[end] ) ) {
                end--;
            }

            swap(s[st], s[end]);
            st++;
            end--;


        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna