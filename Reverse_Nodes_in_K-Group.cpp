
#include <iostream>
using namespace std;

// Node
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Solution
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head;
        int count = 0;

        while (count < k) {
            if (temp == NULL) {
                return head;
            }
            temp = temp->next;
            count++;
        }

        ListNode *preNode = reverseKGroup(temp, k);
        ListNode *t = head;
        int c = 0;

        while (c < k) {
            ListNode *next = t->next;
            t->next = preNode;
            preNode = t;
            t = next;
            c++;
        }

        return preNode;
    }
};

// Create Linked List
int main() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    //  Call Function
    Solution obj;
    head = obj.reverseKGroup(head, k);

    // Print Linked List
    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
