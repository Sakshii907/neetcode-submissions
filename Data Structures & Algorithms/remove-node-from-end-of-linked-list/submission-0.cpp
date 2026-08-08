/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Find length
        int length = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        // Position from beginning
        int position = length - n;

        // If we need to delete head
        if (position == 0) {
            return head->next;
        }

        // Go to node before target
        temp = head;

        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }

        // Delete target node
        temp->next = temp->next->next;

        return head;
    }
};
