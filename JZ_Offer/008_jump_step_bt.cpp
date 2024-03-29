/*
题目描述
一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

此题实际上是求无穷级数， a_n = s_{n-1}
得到结果为 a_n= 2^(n-1)
note that the computation can be optimized by bit operation
*/
class Solution {
public:
    int jumpFloorII(int number) {
        return 1<<(number - 1);
    }
};