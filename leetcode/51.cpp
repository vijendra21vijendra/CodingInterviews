class Solution {
public:
    vector<vector<string>> answer;
    bool isPossible(vector<string> &board, int x, int y){
        int i,j;
        int n = board.size();
        i = x-1;
        while(i>=0){
            if(board[i][y]=='Q'){
                return false;
            }
            --i;
        }
        i = x-1;
        j = y+1;
        while(i>=0 && j<n){
            if(board[i][j]=='Q') return false;
            --i;
            ++j;
        }
        
        
        
        
        i = x-1;
        j = y-1;
        while(i>=0 && j>=0){
            if(board[i][j]=='Q') return false;
            --i;
            --j;
        }
        return true;
    }
    bool solveIt(vector<string> &board, int n, int x, int y){
        if(x==n) return true;
        for(int i=0;i<n;++i){
            if(isPossible(board, x,i)){
                board[x][i] = 'Q';
                bool st = solveIt(board,n,x+1,y);
                if(st==true){
                    answer.push_back(board);
                }
                board[x][i] = '.';
            }
        }
        return false;
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        string ts = "";
        for(int i=0;i<n;++i) ts+= ".";
        vector<string> board(n,ts);
        solveIt(board, n, 0,0);
       return answer; 
    }
};
