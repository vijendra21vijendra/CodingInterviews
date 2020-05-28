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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* doIt(vector<int> &nums, int l, int h){
        if(l>h) return NULL;
        TreeNode *tp;
        if(l==h){
            tp = new TreeNode(nums[l]);
        }else{
            int mid = (l+h)/2;
             tp = new TreeNode(nums[mid]);
             tp->left = doIt(nums,l,mid-1);
            tp->right = doIt(nums,mid+1,h);
        }
        return tp;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return doIt(nums,0,nums.size()-1);
    }
    int len(ListNode *head){
        int l = 0;
        while(head!= NULL){
            ++l;
            head = head->next;
        }
        return l;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL) return 0;
        int l = len(head);
        vector<int> temp;
        while(head){
            temp.push_back(head->val);
            head = head->next;
        }
        return sortedArrayToBST(temp);
    }
};

