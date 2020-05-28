class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0) return -1;
        if(k==1) return 1;
        set<int> hash;
        long long val=1;
        long long modulo=0;
        int l=1;
        while(1){
            if(val % k==0){
                return l;
            }else if(hash.count(val %k)){
                return -1;
            }else{
                hash.insert(val%k);
            }
            l+=1;
            val = val*(10%k) +1;
            val = val%k;
        }
        return -1;
    }
};
