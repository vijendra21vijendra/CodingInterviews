class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum,pro;
        sum=0;
        pro=1;
        while(n){
            int temp = n%10;
            sum += temp;
            pro *= temp;
            n = n/10;
        }
        return pro - sum;
    }
};
