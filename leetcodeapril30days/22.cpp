class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int sum=0;
        
        map<int,int> hash;
        cout<<hash[0]<<endl;
        hash[sum]++;
        for(int x: nums){
            sum += x;
            int needed = sum - k;
            cnt += hash[needed];
            hash[sum]+=1;
        }
        
        return cnt;
    }
};

