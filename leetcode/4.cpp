class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2,nums1);
        }
        const int inf = 1000000;
        int min1,max1,min2,max2;
        int part1,part2;
        int len1,len2;
        len1 = nums1.size();
        len2 = nums2.size();
        int l=0,h = nums1.size();
        while(l <= h)
        {
            part1 = (l+h)/2;
            part2 = (len1 + len2 + 1)/ 2 - part1;
            min1  = part1==len1?inf:nums1[part1];
            max1 = part1 == 0?-inf:nums1[part1-1];
            min2 = part2 == len2?inf:nums2[part2];
            max2 = part2==0?-inf:nums2[part2-1];
            
            if(min2 >= max1 && max2 <= min1){
                if((len1+len2)%2==0){
                    return (min(min1,min2)+max(max1,max2))*1.0 / 2;
                }else{
                    return max(max1,max2);
                }
            }else if(max1 > min2){
                h = part1 -1;
            }else{
                l = part1 +1;
            }
        }
        return 1.0;
    }
};
