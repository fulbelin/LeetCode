class Solution {
public:
    bool checkPerfectNumber(int num) {
        int n = num, i, sum = 0;
        for (i = 1; i <= n - 1; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            return true;
        } else {
            return false;
        }
    }
};
