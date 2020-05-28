class Solution {
public:
    vector<int> get2(int num){
        int i=2;
        vector<int> ans(2);
        ans[0] = 1;
        ans[1] = num;
        while(i*i<= num){
            
            if(num%i==0){
                if(abs(ans[1]-ans[0]) > abs(i - num/i)){
                    ans[0]=i;
                    ans[1] = num/i;
                }
            }
          ++i;  
        }
        return ans;
    }
    
    vector<int> closestDivisors(int num) {
        vector<int> a,b;
           a = get2(num+1);
           b=get2(num+2);
        return abs(a[0]-a[1]) <= abs(b[0]-b[1])?a:b;
    }
};
