class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1,max2;
        max1 = nums[0];
        if(nums[1] > max1){
            max2 = max1;
            max1 = nums[1];
        }else{
            max2 = nums[1];
        }
        for(int i=2;i<nums.size();++i){
            if(nums[i]>=max1){
                max2 = max1;
                max1 = nums[i];
            }else if(nums[i] > max2){
                max2 = nums[i];
            }
        }
        return (max1-1)*(max2-1);
    }
};
