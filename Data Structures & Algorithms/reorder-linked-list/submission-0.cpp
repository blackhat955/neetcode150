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
    void reorderList(ListNode* head) {
        // let find the mid to break the list into two part 
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=nullptr and fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        // find the middle one and break them i a way to reverse the arrow
        // then have to merge them out
        ListNode* tail1=slow->next;
        slow->next=nullptr;
        
        ListNode* curr=tail1;
        ListNode* prev=nullptr;

        while(curr!=nullptr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        ListNode* head1=head;
        ListNode* head2=prev;

        while(head1!=nullptr && head2!=nullptr){
           
           ListNode* temp1=head1->next;
           ListNode* temp2=head2->next;

           head1->next=head2;  // 2-->8

           head2->next=temp1; // 4-->6

           head1=temp1;
           head2=temp2;

        }
    }
};
