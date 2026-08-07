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
    ListNode* reverseList(ListNode* head) {
        ListNode* back = nullptr;
        
        if( head == nullptr) return head;

        ListNode* front = head -> next;

        while(head != nullptr ){
            front = head->next;
            head->next = back;
            back = head;
            head =  front;
            
        }

        

        return back;
    }
};
