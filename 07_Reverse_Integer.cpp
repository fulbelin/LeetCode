class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while (x != 0) {
            int r = x % 10;

            // Check for overflow/underflow BEFORE doing reverse * 10 + r
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && r > 7)) return 0;
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && r < -8)) return 0;

            reverse = reverse * 10 + r;
            x = x / 10;
        }
        return reverse;
    }
};
