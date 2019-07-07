class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        //search from the left bottom corner
        //if current element is smaller than target number, then go right by one element
        //if current element is larger than target number, then go upward
        int num_row = array.size();
        int num_col = array[0].size();
        
        int i = num_row - 1;
        int j = 0;
        while(i >= 0 && j < num_col){
            if (array[i][j] == target)
                return true;
            if (array[i][j] > target){
                --i;
                continue;
            }
            if (array[i][j] < target){
                ++j;
                continue;
            }
        }
        return false;
    }
};
