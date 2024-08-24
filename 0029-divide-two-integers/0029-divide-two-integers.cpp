class Solution {
public:
    int divide(int dividend, int divisor) {
       
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        const int sign = (dividend > 0) ^ (divisor > 0) ? -1 : 1;
      long dvd = labs(dividend);
        long dvs = labs(divisor);
        long ans = 0;
        while (dvd >= dvs) {
            long temp = dvs, multiple = 1;
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            dvd -= temp;
            ans += multiple;
        }
        return sign * ans;
    }
};
