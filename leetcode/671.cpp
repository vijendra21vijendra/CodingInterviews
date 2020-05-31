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
    const long long inf = 1e11;
    int min1;
    long long ans;
    void dfs(TreeNode *root){
        if(root){
            if(root->val > min1 && root->val <ans){
                ans = root->val;
            }else if(root->val == min1){
                dfs(root->left);
                dfs(root->right);
            }else{
                return;
            }
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
        if(!root) return -1;
        min1 = root->val;
        ans = inf;
        dfs(root);
        return (ans> min1 && ans < inf) ?ans:-1;
    }
};
