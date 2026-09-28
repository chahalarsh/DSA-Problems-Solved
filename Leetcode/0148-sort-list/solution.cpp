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
    ListNode* sortList(ListNode* head) {
        vector<int> list;
        while(head){
            list.push_back(head -> val);
            head = head -> next;
        }

        if(list.empty()){
            return nullptr;
        }

        sort(list.begin(), list.end());

        ListNode* newHead = new ListNode;
        ListNode* node = newHead;

        for(int i = 0; i < list.size(); i++){
            node -> val = list[i]; 
            if( i != list.size() - 1){
                node -> next = new ListNode;
                node = node -> next;
            }
        } 


        return newHead;
    }
};
