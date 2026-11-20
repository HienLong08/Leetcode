#include <string.h>

int lengthOfLastWord(char* s) {
    int Dem = 0;
    int DemTruoc = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            Dem++;
        } else {
            if (Dem > 0) {
                DemTruoc = Dem;
                Dem = 0;
            }
        }
    }

    if (Dem > 0) {
        return Dem;
    }

    return DemTruoc;
}

//Runtime: 0ms - Beats 100.00%
//Memory 8.44MB - Beats 87.22%