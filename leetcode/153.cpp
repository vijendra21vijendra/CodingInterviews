




class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int mid,h;
        h = nums.size()-1;
        if(nums[l] < nums[h]) return nums[l];
        while(l < h){
            mid = (l+h)/2;
            if(nums[mid] < nums[h]){
                h =mid;
            }else{
                l = mid+1;
            }
        }
        return nums[l];
    }
};






class Solution {
public:
	
	
    int findMin(vector<int>& nums) {
        int l = 0;
        int mid,h;
        h = nums.size()-1;
        if(nums[l] < nums[h]) return nums[l];
        while(l < h){
            if(h-l ==1) return min(nums[l],nums[h]);
            if(nums[l] < nums[h]) return nums[l];
            mid = (l+h)/2;
            if(nums[l]< nums[mid]){
                l = mid+1;
            }else if(nums[l]>nums[mid]){
                h = mid;
                l+=1;
            }else{
                return nums[l];
            }
        }
        return nums[l];
    }
};
