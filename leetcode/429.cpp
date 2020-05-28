/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        q.push(root);
        Node *temp;
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        while(!q.empty()){
            int x= q.size();
            vector<int> ap;
            for(int i=0;i<x;++i){
                temp = q.front();
                q.pop();
                ap.push_back(temp->val);
                vector<Node*> child = temp->children;
                for(int i=0;i<child.size();++i){
                    q.push(child[i]);
                } 
            }
            ans.push_back(ap);
        }
        return ans;
        
    }
};
