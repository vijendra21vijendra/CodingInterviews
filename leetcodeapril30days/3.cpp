class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum,sum;
        maxSum = INT_MIN;
        sum=0;
        for(int a: nums){
            sum = max(a+sum, a);
            maxSum = max(sum, maxSum);
        }
        return maxSum;
    }
};

