class Solution {
public:
    bool isHappy(int n) {
        set<int> lp;
        lp.insert(n);
        while(n!=1){
            int val=0;
            while(n){
                val += (n%10)* (n%10);
                n = n/10;
            }
            n = val;
            if(lp.find(n)!= lp.end()){
                return false;
            }
            lp.insert(n);
        }
        return n==1;
    }
};

