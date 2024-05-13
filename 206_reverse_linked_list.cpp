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
        ListNode* prev=NULL; //set 'prev' to null
        ListNode* temp=head; // set current as 'temp' to 'head'
        while(temp!=NULL) { // iterate from first to last
            ListNode* next=temp->next; // 'next' is the next node of the list
            temp->next=prev; // set current to previous node 
            prev=temp; //
            temp=next;
        }
        return prev;
    }
}