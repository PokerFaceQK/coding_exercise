class Solution {
public:
    int Fibonacci(int n) {
        // This recursive solution didn't pass the test cases due to too long time cost
        // All elements in the fabonacci series are computed more than once
        //if (n == 0)
        //    return 0;
        //if (n == 1)
        //    return 1;
        //return Fibonacci(n-1) + Fibonacci(n-2);

        //This loop version run in O(N)
        //It can alse be optimized: compute 2 numbers per step
        // tmp1 += tmp2, tmp2 += tmp1
        //decide the output by n%2
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int num = 0;
        int num_pre = 1;
        int num_ppre = 0;
        for (int i=2 ; i<=n ; ++i) {
            num = num_pre + num_ppre;
            num_ppre = num_pre;
            num_pre = num;
        }
        return num;
        // another solution is to use matrix, see https://blog.csdn.net/zhufenghao/article/details/70059671 for reference
    }
};