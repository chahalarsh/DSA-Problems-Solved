class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode lesserDummy(0), greaterDummy(0);
        ListNode *less = &lesserDummy, *great = &greaterDummy;

        while(head){
            if(head -> val < x){
                less -> next = head;
                less = less -> next;
            }else{
                great -> next = head;
                great = great -> next;
            }
            head = head -> next;
        }
        great -> next = nullptr;
        less -> next = greaterDummy.next;

        return lesserDummy.next;
    }
};
