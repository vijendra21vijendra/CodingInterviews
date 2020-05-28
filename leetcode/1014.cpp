// class Solution {
// public:
//     int maxScoreSightseeingPair(vector<int>& arr) {
//         // here what we can see is this if weightbypositionn + value > lastmax then update it.
        
        
//         int prev,maxval;
//         prev = arr[0];
//         maxval = 0;
//         for(int i=1;i<arr.size();++i){
//             maxval = max(maxval , prev + arr[i] - i);
//             prev = max(prev, arr[i]+i);
//         }
//         return maxval;
//     }
// };

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& arr) {
        // here what we can see is this if weightbypositionn + value > lastmax 
        
        
        int prev,maxval;
        int prevIndex=0;
        prev = arr[0];
        maxval = 0;
        for(int i=1;i<arr.size();++i){
           maxval = max(maxval, prev + arr[i] - (i - prevIndex));
           if(prev + prevIndex <= arr[i] + i){
               prev =  arr[i];
               prevIndex = i;
           }
        }
        return maxval;
    }
};
