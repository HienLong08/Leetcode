class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* Cur = head;
        int Dem = 0;

        while (Cur != NULL) {
            Dem++;
            Cur = Cur->next;
        }

        int Giua = Dem / 2;

        Cur = head;

        for (int i = 0; i < Giua; i++) {
            Cur = Cur->next;
        }

        return Cur;
    }
};

#Runtime: 0ms - Beats 100.00%
#Memory: 9.92MB - Beats: 64.21%
