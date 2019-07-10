/*
输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。

其实本题不用考虑负数的具体情况，只用关心int型在内存的存放方式。
*/
class Solution {
public:
     int  NumberOf1(int n) {
         int mask = 0;
         int len = sizeof(int) * 8;
         int count = 0;
         for (int i=0 ; i<len ; ++i) {
             mask = 1 << i;
             if (mask&n) 
                 count++;
         }
         return count;
     }
};