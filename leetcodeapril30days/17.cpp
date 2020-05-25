#include <bits/stdc++.h>
using namespace std;

          void dfs(vector<vector<char>> &grid, int i, int j){
           if(i==grid.size()||j==grid[i].size()||grid[i][j]=='0') return;
           if(grid[i][j]=='1'){
               grid[i][j]='0';
               dfs(grid, i+1,j);
               dfs(grid,i,j+1);
           }
       }
    void print(vector<vector<char>> &grid){
    	for(int i=0;i<grid.size();++i){
    		for(int j=0;j<grid[i].size();++j){
    			cout<<grid[i][j]<<" ";
			}
			cout<<endl;
		}
	}
    
    int numIslands(vector<vector<char>>& grid) {
    	print(grid);
        int cnt=0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[i].size();++j){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    // i will go only in right side and down side
                    cnt+=1;
                }
            }
        }
        return cnt;
    }

int main() {
    vector<vector<char>> grid;
    grid.push_back({'0','0','1','0','0'});
    grid.push_back({'0','0','0','1','1'});
	cout<<numIslands(grid)<<endl;
	return 0;
}

// 00100
// 00011
