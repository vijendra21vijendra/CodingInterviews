class Solution {
public: 
    int search(vector<int>& nums, int target)
    {
           if(nums.empty()) return -1;
            
           int high=nums.size()-1,low=0,mid;
           while(low  <= high)
           {
               int mid = (low + high)/2;
               if(nums[mid]==target){
                   return mid;
               }else if(nums[low]<= nums[mid]){
                   if(target>=nums[low] && target<= nums[mid]){
                       high = mid-1;
                   }else{
                       low = mid+1;
                   }
               }else{
                if(target>= nums[mid]  && target<= nums[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
               }
           }
        return -1;
    }
};
