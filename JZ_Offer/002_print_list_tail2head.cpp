/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> array;
        ListNode * p = head;
        while (p != NULL) {
            array.push_back(p->val); // do not insert(array.begin()) because it cost too much time, do push_back and reverse() instead
            p = p->next;
        }
        std::reverse(array.begin(), array.end());
        return array;
    }
};