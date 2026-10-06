class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int Dem = 0;

        for (int i = 0; i < startTime.size(); i++) {
            if (startTime[i] <= queryTime && endTime[i] >= queryTime) {
                Dem += 1;
            }
        }

        return Dem;
    }
};

#Runtime: 0ms - Beats 100.00%
#Memory: 14.14MB - Beats 87.43%
