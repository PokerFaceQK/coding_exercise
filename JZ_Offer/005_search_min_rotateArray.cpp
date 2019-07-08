class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int left_index = 0;
        int right_index = rotateArray.size() - 1;
        bool found = false;
        if (rotateArray.size() == 0) 
            return 0;
        
        while (!found) {
            int mid = (left_index + right_index) / 2;
            if (mid == left_index) {
                found = true;
                break;
            }
            if (rotateArray[left_index] == rotateArray[mid] && rotateArray[mid] == rotateArray[right_index]) {
                return min_search(rotateArray, left_index, right_index);
            }
            if (rotateArray[mid] >= rotateArray[left_index]) {
                left_index = mid;
                continue;
            }
            if (rotateArray[mid] <= rotateArray[right_index]) {
                right_index = mid;
                continue;
            }
        }
        return rotateArray[right_index];
    }
private:
    int min_search(vector<int> a, int start, int end) {
        int min_tmp = a[start];
        for (int i=start; i<=end ; ++i){
            if (min_tmp > a[i]) {
                min_tmp = a[i];
            }
        }
        return min_tmp;
    }
};