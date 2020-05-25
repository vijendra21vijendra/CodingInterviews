#include<bits/stdc++.h>
using namespace std;

bool dfs(TreeNode *root, const vector<int> &arr, int depth)
{
	if(root==NULL) return false;
	
	if(root->left == NULL && root->right == NULL && root->data == arr[depth]) return true;
	
	if(root->data = arr[depth]){
		return dfs(root->left, arr, depth+1) || dfs(root->right, arr, depth+1);
	}else{
		return false;
	}	
}

bool checkstringintree(TreeNode *root, vector<int> &arr)
{
	return dfs(root, arr, 0);
}

int main()
{


return 0;
}

