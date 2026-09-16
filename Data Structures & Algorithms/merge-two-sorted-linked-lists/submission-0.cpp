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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* curr = &dummy;

        while(list1 != nullptr && list2 != nullptr){
            if(list1->val < list2->val){
                //list 1 value goes first
                curr->next = list1;
                list1 = list1->next;
            }else{
                curr -> next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        // append the rest of the list to the end when one of them is @ the nullptr
        // the list that has remaining numbers will still be intact with its pointer's
        curr->next = (list1 != nullptr) ? list1 : list2;

        return dummy.next;
    }
};
