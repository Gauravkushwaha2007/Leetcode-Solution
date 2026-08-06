class Solution {
public:

    int getProduct ( int n ){
        int product = ( n > 0) ? 1 : 0;
        while ( n > 0){
            product *= n % 10;
            if( product == 0){
                return 0;
            }
            n = n / 10;
        }
        return product;
    }

    int smallestNumber(int n, int t) {

        while ( getProduct(n) % t != 0){
            n++;
        }
        return n;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna