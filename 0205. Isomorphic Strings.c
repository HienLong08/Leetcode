#include <stdio.h>
#include <stdbool.h>

bool isIsomorphic(char* s, char* t) {

    int Hashs[256] = {0};
    int Hasht[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {

        int A = (unsigned char)s[i];
        int B = (unsigned char)t[i];

        if (Hashs[A] != Hasht[B]) {
            return false;
        }

        Hashs[A] = i + 1;
        Hasht[B] = i + 1;
    }

    return true;
}