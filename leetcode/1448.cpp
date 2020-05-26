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
    int cnt;
    void addGood(TreeNode *root, int value){
        if(!root) return;
        if(root->val >= value){
            ++cnt;
        }
        addGood(root->left, max(value, root->val));
        addGood(root->right, max(value, root->val));
    }
    int goodNodes(TreeNode* root) {
        cnt=0;
        if(root==NULL) return 0;
        cnt+=1;
        addGood(root->left, root->val);
        addGood(root->right, root->val);
        return cnt;
    }
};
