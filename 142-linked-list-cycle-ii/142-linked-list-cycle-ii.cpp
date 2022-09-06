/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow =head, *fast=head;
        int s=0;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                s++;
                fast=head;
                break;
            }
        }
        
        
        
        if(s==0){
            return NULL;
        }
        else{
            while(fast!=slow){
                fast=fast->next;
                slow=slow->next;
            }
            return fast;
        }
        
    }
};