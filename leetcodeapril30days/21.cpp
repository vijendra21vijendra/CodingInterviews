int leftMostColumn(vector<vector<bool>> &grid)
{
    if(grid.size()==0) return -1;
    int rows = grid.size(),cols = grid[0].size();
    int row=0,col=cols-1;
    int found=-1;
    while(row<rows){
        if(grid[row][col]==true){
            found  = col;
            --col;
        }else{
            ++row;
        }
        if(col==-1){
            col = cols-1;
        }
    }
    return found;
}
