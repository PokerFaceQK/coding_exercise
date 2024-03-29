/*
题目描述
我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。
请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？

思路：
本题实际上也是fibonacci的应用
*/

class Solution {
public:
    int rectCover(int number) {
        int pre = 1;
        int ppre = 1;
        int num = pre + ppre;
        if (number == 0) {
            return 0;
        }
        if (number == 1) {
            return 1;
        }
        for (int i=2 ; i<=number ; ++i) {
            num = pre + ppre;
            ppre = pre;
            pre = num;
        }
        return num;
    }
};