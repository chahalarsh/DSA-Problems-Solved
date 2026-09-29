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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* t1 = list1;
        ListNode* t2 = list1;
        ListNode* t3 = list2;

        for(int i = 0; i < b; i++){
            if( i < a - 1){
                t1 = t1 -> next;
            }
            t2 = t2 -> next;
        }

        while(t3 -> next){
            t3 = t3 -> next;
        }

        t1 -> next = list2;
        t3 -> next = t2 -> next;

        return list1;
    }
};
