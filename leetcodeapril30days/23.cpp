class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int val=0;
        //cout<<sizeof(m)<<endl;
        for(int i=30;i>=0;--i){
            
            if((m & 1<<i) && (n & 1<<i)){
                val = val| (1<<i);
            }else if((m& 1<<i)==0 && (n&1<<i)==0){
                
            }
                else{
                return val;
            }
        }
        return val;
    }
};

