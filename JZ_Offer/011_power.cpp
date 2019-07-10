/*
base:double
exponent:int
power(base, exponent) = ?

思路：
可以用二分法：a^n = a^(n/2) * a^(n/2) * a^(n%2) 
需要注意负数的情况
另外，当base==0而exponent<0, 需要提供异常处理。

*/
class Solution {
public:
    double Power(double base, int exponent) {
        double result = 1;
        int neg_flag = 0;
        if (exponent < 0) {
            exponent *= -1;
            neg_flag = 1;
        }
        while(exponent > 0) {
            if (exponent%2 == 1) {
                result *= base;
            }
            exponent /= 2;
            base *=base;
        }
        if (neg_flag == 1)
            result = 1/result;
        return result;
    }
};