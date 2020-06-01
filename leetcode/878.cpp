

class Solution{
    public:
     int gcd(int x, int y) {
        if (x == 0) return y;
        return gcd(y % x, x);
    }
    int nthMagicalNumber(int n, int a, int b) {
        if(a>b) return nthMagicalNumber(n,b,a);
        int const mod = 1e9 + 7;
        int lcm = (a*b)/gcd(a,b);
        int m =  lcm/a + lcm/b -1;
        int q = n/m , r = n%m;
        long long ans = (long)q * lcm %mod;
        if(r==0) return (int)ans;
        int vals[2] = {a,b};
        for(int i=0;i<r-1;++i){
            if(vals[0]<vals[1]){
                vals[0] += a;
            }else{
                vals[1]+=b;
            }
        }
       ans += min(vals[0],vals[1]);
        return ans%mod;
    }
    
};#include<bits/stdc++.h>
#include "classes.h"
#include "funcs.h"
using namespace std;

int main()
{


return 0;
}

