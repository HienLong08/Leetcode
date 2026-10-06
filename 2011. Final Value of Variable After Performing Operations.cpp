class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int Dem = 0;

        for (string i : operations) {
            if ((i == "++X") || (i == "X++")) {
                Dem += 1;
            }
            else {
                Dem -= 1;
            }
        }

        return Dem;
    }
};

#Runtime: 0ms - Beats 100.00%
#Memory: 17.77MB - Beats 8.98%