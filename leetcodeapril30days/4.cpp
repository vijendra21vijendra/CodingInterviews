class Solution {
private:
    void swap(vector<int> &nums, int i , int j){
        int temp = nums[i];
        nums[i]  = nums[j];
        nums[j] = temp;
    }
public:
    void moveZeroes(vector<int>& nums) {
       int i,j;
       i=0,j=1;
        while(i< nums.size()){
            if(nums[i]){
                
            }else{
                j=i+1;
                while(j< nums.size() && nums[j]==0) ++j;
                if(j< nums.size())
                swap(nums,i,j);
                else break;
            }
            ++i;
        }
    }
};
// this is not right when these are elements which are taken as zero not exactly zeroes.
/*
0 1 0 3 12
1 0 1

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j;
        i =j =0;
        while(i < nums.size()){
            if(nums[i]){
                nums[j]=nums[i];
                ++j;
            }
            ++i;
        }
        while(j< nums.size()){
            nums[j]=0;
            ++j;
        }
    }
};


*/

