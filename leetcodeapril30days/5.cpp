class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,prev=prices[0];
        for(int a: prices){
            if(a > prev)
            { 
                profit += a-prev;
                prev = a;
            }else{
                prev = a;
            }
        }
        return profit;
    }
};

