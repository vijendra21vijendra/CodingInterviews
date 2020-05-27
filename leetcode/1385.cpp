class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int minR,maxR;
         int count=0;
        for(int i=0;i<arr1.size();++i){
            minR = arr1[i]-d;
            maxR = arr1[i]+d;
            int j=0;
            while(j<arr2.size() && (arr2[j]<minR || arr2[j]> maxR)) ++j;
            
            if(j==arr2.size()) ++count;
        }
        return count;
    }
};
