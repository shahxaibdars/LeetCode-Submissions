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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = l1;
        ListNode* ans = l1;
        int carry = 0;

        while (true){
            l3->val += l2->val + carry;

            if (l3->val >= 10){
                l3->val-=10;
                carry = 1;
            }
            else carry = 0;

            if (l2 ->next == nullptr || l3 ->next == nullptr){
                break;
            }

            l3 = l3->next;
            l2 = l2->next;
        }

        if (l3->next == nullptr){
            l3->next = l2->next;
        }
        if (l3->next == nullptr){
            if (carry == 1){
                l3->next = new ListNode;
                l3->next->val = 1;
                return ans;
            }
        }
        else{
            l3 = l3->next;
        }

        while(l3){
            l3->val += carry;

            if (l3->val >= 10){
                l3->val-=10;
                carry = 1;
            }
            else carry = 0;

            if (l3->next == nullptr){
                if (carry == 1){
                    l3->next = new ListNode;
                    l3->next->val = 1;
                }
                break;
            }
            else{
                l3 = l3->next;
            }
        }
        return ans;
    }
};