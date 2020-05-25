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
    int maxi;
public:
    int doIt(TreeNode *root)
    {
        if(!root) return 0;
        int x,y;
        x = doIt(root->left);
        y  = doIt(root->right);
        maxi = max(maxi, x+y+root->val);
        return max(max(x,y)+root->val,0);
    }
    int maxPathSum(TreeNode* root) {
        maxi = -1000000;
        doIt(root);
        return maxi;
    }
};
