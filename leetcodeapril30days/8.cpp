class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(!head) return NULL;
        ListNode *slow, *fast;
        slow = head;
        fast = head->next;
        while(slow && fast){
            slow = slow->next;
            if(fast->next){
                fast = fast->next->next;
            }else{
                fast = fast->next;
            }
        }
        return slow;
    }
};
