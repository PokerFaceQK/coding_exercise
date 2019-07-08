// Problem description:
// There is a frog that can jump 1 or 2 steps. How many possibilities are there for the frog to jump to the n-th step?

class Solution { // This problem is essentially an application of fibonacci series
public:
    int jumpFloor0(int number) { 
        if (number <= 1) {
            return 1;
        }
        return jumpFloor0(number - 1) + jumpFloor0(number - 2);
    }
    
    int jumpFloor(int number) {
        int pre = 1;
        int ppre = 1;
        int num = pre + ppre;
        if (number <= 1) {
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