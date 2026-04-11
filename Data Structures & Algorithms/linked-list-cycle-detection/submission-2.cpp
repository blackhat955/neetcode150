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
    bool hasCycle(ListNode* head) {

        // unordered_map<ListNode*, bool> visited;

        // while(head!=nullptr){
        //    if(visited.find(head)!=visited.end()){
        //     if(visited[head]==true) return true;
        //    }
          
        //   visited[head]=true;
        //   head=head->next;

        // }

        // return false;



        // ListNode* slow=head;  // it was wrong due to if head is null then head->next is throw segment fault
        // ListNode* fast=head->next;

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast) return true;

        }

        return false;
    }
};
