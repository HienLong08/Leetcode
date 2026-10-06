class Solution {
public:
    string defangIPaddr(string address) {
        string Ds;

        for (char i : address) {
            if (i == '.') {
                Ds += "[.]";
            }
            else {
                Ds += i;
            }
        }

        return Ds;
    }
};

#Runtime: 2ms - Beats 54.41%
#Memory: 7.48MB - Beats 99.82%