/*
Problem description:
return the k-th last node in a list

Solution:
1 use a queue to keep the last k-1 nodes. when the last node is visited, pop the k-th last node from the queue.

2 better solution is to use 2 pointers so that d(p1, p2)==k-1, where p1 points the current node. when p1->next==NULL, return p2
*/

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        /*queue<ListNode*> q;
        while (pListHead != NULL) {
            if (q.size() < k-1) {
                q.push(pListHead);
            }
            else {
                q.pop();
                q.push(pListHead);
            }
            pListHead = pListHead->next;
        }
        return q.front();
        */
        ListNode* k_node = pListHead;
        for (int i=0 ; i<k ; ++i) {
            if (pListHead == NULL) {
                return NULL;
            }
            pListHead = pListHead->next;
        }
        
        while (pListHead != NULL) {
            pListHead = pListHead->next;
            k_node = k_node->next;
        }
        return k_node;
    }
};