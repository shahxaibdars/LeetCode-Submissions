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
        
        int sum = 0;
        ListNode* ans = new ListNode;
        ListNode* l3 = ans;

        while (true){
            
            sum = l1->val + l2->val + sum;

            if (sum >= 10) {
                l3->val = sum - 10;
                sum = 1;
            }
            else{
                l3->val = sum;
                sum = 0;
            }
            l1 = l1->next;
            l2 = l2->next;

            if (l1 != nullptr && l2 != nullptr){
                l3->next = new ListNode;
                l3 = l3->next;
            }
            else{
                ListNode* l4;
                if (l1 == nullptr) l4 = l2;
                else l4 = l1;

                if (l4){
                    l3->next = new ListNode;
                    l3 = l3->next;
                }

                while(l4){
                    sum = l4->val + sum;
                    if (sum >= 10) {
                        l3->val = sum - 10;
                        sum = 1;
                    }
                    else{
                        l3->val = sum;
                        sum = 0;
                    }
                    l4 = l4->next;
                    if (l4 != nullptr){
                        l3->next = new ListNode;
                        l3 = l3->next;
                    }
                    else{
                        break;
                    }
                }
                if (sum == 1){
                    l3->next = new ListNode;
                    l3->next->val = 1;
                }
                break;
            }
        }

        return ans;
    }
};