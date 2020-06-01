class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0) return m*n;
        int mini1=40001,mini2=40001;
        for(int i=0;i<ops.size();++i){
            mini1 = min(mini1, ops[i][0]);
            mini2 = min(mini2, ops[i][1]);
        }
        return mini1*mini2;
    }
};
