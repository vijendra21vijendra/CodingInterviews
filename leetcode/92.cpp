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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *head1,*head2,*temp;
        head1 = NULL;
        temp = head;
        for(int i=1;i<m;++i){
            head1 = temp;
            temp = temp->next;
        }
        // now head1 have first location
        ListNode* temphead1 = temp;
        //cout<<head1->val<<" head1"<<endl;
      //  cout<<temphead1->val<<"  temp head1 "<<endl;
        ListNode *prev,*prev2;
        prev2  = NULL;
        prev = NULL;
        for(int i=0;i<=n-m;++i){
            prev2 = prev;
            prev = temp;
            temp = temp->next;
            prev->next = prev2;
        }
        ListNode* temphead2 = prev;
    //     cout<<temphead2->val<<"  temp head2 "<<endl;
       // temp = temp->next;
      //  cout<<temp->val<<endl;
        if(head1){
            head1->next = temphead2;
            temphead1->next = temp;
            return head;
        }else{
                temphead1->next = temp;
                return temphead2;
        }
        return NULL;
    }
};
