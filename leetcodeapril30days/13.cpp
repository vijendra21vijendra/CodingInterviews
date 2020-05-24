class Solution {
public:
    // 0 1
    // 0 1 0
    int findMaxLength(vector<int>& nums) {
       int n = nums.size();
        unordered_map<int,int> hash;
        int val=0;
        int maxi=0;
        hash.insert(make_pair(0,0));
        for(int i=0;i<n;++i){
           val += nums[i]==0?-1:1;
           if(val==0){
               maxi = max(maxi, i+1);
           }
           else if(hash.find(val)!=hash.end()){
               maxi = max(maxi, i-hash[val]);
           }
            else {
                hash.insert(make_pair(val,i));
            }
        }
        return maxi;
    }
};

