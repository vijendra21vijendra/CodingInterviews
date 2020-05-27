class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> answer;
        set<vector<int>> mp;
        mp.insert({});
        answer.push_back({});
        for(int i=0;i<nums.size();++i){
            int val = nums[i];
            
            int asize = answer.size();
            for(int j=0;j<asize;++j){
                vector<int> temp = answer[j];
                temp.push_back(val);
                sort(temp.begin(),temp.end());
                if(mp.find(temp)==mp.end()){
                    answer.push_back(temp);
                    mp.insert(temp);
                }
            } 
        }
        return answer;
    }
};
// [[]]
// [[],[1]]
// [[],[1],[2],[1,2]]
// [[],[1],[2],[1,2], [2,2] , [1,2,2]]

