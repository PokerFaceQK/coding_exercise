void replaceSpace0(char *str,int length) { // more straight-forward idea, more moves
        for (int i=0 ; i<length ; ) {
            if (str[i] == ' ') {
                for (int j=length-1 ; j>i ; --j) {
                    str[j+2] = str[j];
                }
                length += 2;
                str[i] = '%';
                str[i+1] = '2';
                str[i+2] = '0';
                i += 3;
            }
            else {
                ++i;
            }
        }
	}

void replaceSpace1(char *str, int length) { // count total number of spaces, then calculate the target index after replacement. 
                                            //So each element only needs to be moved once
    int count_space = 0;
    for (int i=0 ;i<length ; ++i) {
        if (str[i] == ' ') {
            count_space++;
        }
    }
    for (int i=length-1 ; i>0 ; --i) {
        if (str[i] == ' ') {
            count_space--;
            str[i+count_space*2] = '%';
            str[i+count_space*2 + 1] = '2';
            str[i+count_space*2 + 2] = '0';
        }
        else
        {
            str[i+count_space*2] = str[i];
        }
    }
}