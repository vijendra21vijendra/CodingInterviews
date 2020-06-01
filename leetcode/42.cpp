class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        if(!n) return 0;
        int leftmax,rightmax,total;
        leftmax = rightmax= total=0;
        int l=0,h=n-1;
        while(l<=h){
            if(arr[l]<=arr[h]){
              leftmax = max(leftmax, arr[l]);
                total += (leftmax - arr[l]);
                ++l;
            }else{
                rightmax = max(rightmax, arr[h]);
                total += (rightmax - arr[h]);
                --h;
            }
        }
        return total;
    }
};



















// int trap(vector<int>& height) {
//         int total=0;
//         int n = height.size();
//         if(!n) return 0;
//         int leftmax[n],rightmax[n];
//         int maxi=-1;
//         for(int i=0;i<n;++i){
//             if(height[i]>maxi){
//                 maxi = leftmax[i] = height[i];
//             }else{
//                 leftmax[i] = maxi;
//             }
//         }
//         maxi=-1;
//          for(int i=n-1;i>=0;--i){
//             if(height[i]>maxi){
//                 maxi = rightmax[i] = height[i];
//             }else{
//                 rightmax[i] = maxi;
//             }
//         }
        
//         for(int i=0;i<n;++i){
//             total += (min(leftmax[i],rightmax[i]) *1 - height[i]);
//         }
//         return total;
//     }#include<bits/stdc++.h>
#include "classes.h"
#include "funcs.h"
using namespace std;

int main()
{


return 0;
}

