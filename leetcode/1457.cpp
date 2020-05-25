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
    void ins(set<int> &st,int val){
            if(st.count(val)){
                st.erase(val);
            }else{
                st.insert(val);
            }
    }
    int doMagic(TreeNode *root, set<int> &st){
        ins(st,root->val);
        int ret=0;
        if(!root->left && !root->right){
            if(st.size()<=1){
                ret=1;
            }
        }else{
            if(root->left!=NULL){
                ret += doMagic(root->left, st);
            }
            if(root->right != NULL){
                ret += doMagic(root->right, st);
            }
        }
        ins(st, root->val);
        return ret;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        set<int> st;
        if(!root) return 0;
        return doMagic(root, st);
    }
};
