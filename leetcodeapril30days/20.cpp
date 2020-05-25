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
    TreeNode* doMagic(vector<int> &preorder, int low, int high)
    {
        if(low>high) return NULL;
        
        TreeNode *head = new TreeNode(preorder[low]);
        int i;
        i = low+1;
        TreeNode *left,*right;
        while(i<= high && preorder[i] < preorder[low]) ++i;
        
        left = doMagic(preorder, low+1,i-1);
        right = doMagic(preorder, i,high);
        head->left = left;
        head->right = right;
        return head;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.empty()) return NULL;
        return doMagic(preorder,0,preorder.size()-1);
    }
};
