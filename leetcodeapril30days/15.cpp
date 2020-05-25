class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> answer(n,1);
        int i=n-1;
        answer[i]=1;
        i-=1;
        while(i>=0){
            answer[i] = answer[i+1]*nums[i+1];
            --i;
        }
        int mul=nums[0];
         i=1;
        while(i < n){
            answer[i] = answer[i] * mul;
            mul *= nums[i];
            ++i;
        }
        return answer;
    }
};
