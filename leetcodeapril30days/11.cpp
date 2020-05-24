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
    int magic(TreeNode *root, int &maxi)
    {
        if(root->left == NULL && root->right ==NULL){
            return 1;
        }
        int val1,val2;
        val1=val2=0;
        if(root->left){
            val1 = magic(root->left, maxi);
        }
        if(root->right){
            val2 = magic(root->right,maxi);
        }
        maxi = max(val1+val2, maxi);
        return max(val1,val2) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL|| (root->left==NULL && root->right == NULL)) return 0;
        int maxi=0;
        magic(root,maxi);
        return maxi;
    }
};
