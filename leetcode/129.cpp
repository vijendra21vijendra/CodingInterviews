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
    long long sum;
    void doIt(TreeNode *root, int val){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            sum += (10*val + root->val);
            return;
        }
        doIt(root->left, val*10+root->val );
        doIt(root->right, val*10 + root->val);
    }
    
    int sumNumbers(TreeNode* root) {
        sum =0;
        if(root==NULL) return 0;
        doIt(root, 0);
        return sum;
    }
};
