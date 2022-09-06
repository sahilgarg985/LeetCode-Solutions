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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while((fast!=NULL) && (fast->next!=NULL)){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast!=NULL){
            slow=slow->next;
        }
        
        vector<int> v;
        while(slow!=NULL){
            v.push_back(slow->val);
            slow=slow->next;
        }
        
        reverse(v.begin(),v.end());
        int s=0;
        for(int i=0 ; i<v.size() ; i++){
            if(head->val !=v[i]){
                s++;
                break;
            }
            head=head->next;
        }
        if(s==0){
            return true;
        }
        else{
            return false;
        }
    }
};