#include <stdio.h>
#include <stdbool.h>

bool canConstruct(char* ransomNote, char* magazine) {

    int Hash[256];

    for (int i = 0; i < 256; i++) {
        Hash[i] = 0;
    }

    for (int i = 0; magazine[i] != '\0'; i++) {
        Hash[(unsigned char)magazine[i]]++;
    }

    for (int i = 0; ransomNote[i] != '\0'; i++) {
        Hash[(unsigned char)ransomNote[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (Hash[i] < 0) {
            return false;
        }
    }

    return true;
}

//Runtime: 1ms - Beats 69.26%
//Memory: 9.74MB - Beats 7.59%