class Solution {
public:
    bool canConnect(vector<vector<int>> &grid, int x, int y){
        for(int i=0;i<grid.size();++i){
            if(i==x){
                continue;
            }else{
                if(grid[i][y]==1) return true;
            }
        }
        
        for(int j=0;j<grid[x].size();++j){
            if(j==y) continue;
            else{
                if(grid[x][j]==1) return true;
            }
        }
        return false;
    }
    
    
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n==0) return 0;
        int m= grid[0].size();
        int total=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j]==1 && canConnect(grid,i,j)){
                    total+=1;
                }
            }
        }
        return total;
    }
};


// 1 0
// 1 1
