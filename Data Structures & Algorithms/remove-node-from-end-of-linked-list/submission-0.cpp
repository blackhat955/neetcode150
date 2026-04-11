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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
       if(!head) return nullptr;
       if(!head->next && n==1) return nullptr;

        int count=0;

        ListNode* temp=head;

        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
  

        int nodeRemoveFromFront=count-n;

        temp=head;

        // if head need to remove

        if(nodeRemoveFromFront==0){
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }

        for (int i = 1; i < nodeRemoveFromFront; i++) {
             temp = temp->next;
          }

        ListNode* removeOne=temp->next;
        temp->next=temp->next->next;
        delete removeOne;
        return head;

    }
};
