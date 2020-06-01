class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if(n<=1) return n;
        // 1 2
        //     
        int fromleft[n],fromright[n];
        fromleft[0]=1;
        for(int i=1;i<n;++i){
            if(ratings[i]>ratings[i-1]){
                fromleft[i] = fromleft[i-1]+1;
            }else{
                fromleft[i] = 1;
            }
        }
        int i=n-1;
        fromright[i] = 1;
        int sum = max(fromleft[i],fromright[i]);
        --i;
        while(i>=0){
            if(ratings[i]> ratings[i+1]){
                fromright[i] = fromright[i+1]+1;
            }else{
                fromright[i] =1;
            }
            sum += max(fromleft[i],fromright[i]);
            --i;
        }
        return sum;
    }
};
