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

bool comp(pair<int,int> a , pair<int,int> b){
   if(a.first != b.first){
       return a.first > b.first;
   }
    return a.second < b.second;
}
class Solution {
public:
    void doIt(TreeNode *root, int x, int y , map<int, vector<pair<int,int>>> &mp){
        if(root == NULL) return;
        if(mp.find(x)==mp.end()){
            vector<pair<int,int>> vp;
            vp.push_back(make_pair(y,root->val));
            mp[x] = vp;
        }else{
            mp[x].push_back(make_pair(y,root->val));
        }
        doIt(root->left, x-1,y-1,mp);
        doIt(root->right, x+1,y-1,mp);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>> mp;
        doIt(root,0,0,mp);
        vector<vector<int>> answer;
        for(auto &x: mp){
            auto &P = x.second;
            sort(P.begin(),P.end(),comp);
        }
        for(auto &x : mp){
            vector<int> sp;
            auto &P = x.second;
            for(int i=0;i<P.size();++i){
                sp.push_back(P[i].second);
            }
            answer.push_back(sp);
        }
        return answer;
    }
    
};
