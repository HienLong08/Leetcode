#include <stdio.h>

int firstUniqChar(char* s) {

    int Hash[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        Hash[(unsigned char)s[i]]++;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (Hash[(unsigned char)s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

//Runtime: 7ms - Beats 34.84%
//Memory 10.64MB - Beats 7.05%