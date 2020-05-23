class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        map<string, vector<string>> mp;
        for(string s: strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }
        for(auto ap : mp){
            answer.push_back(ap.second);
        }
        return answer;
    }
};


/*
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        map<string, int> mp;
        int c =0;
        for(string x: strs){
            string temp = x;
            sort(temp.begin(),temp.end());
            if(mp.find(temp)==mp.end()){
                mp.insert(make_pair(temp, c));
                ++c;
                answer.push_back({x});
            }else{
                answer[mp[temp]].push_back(x);
            }
        }
        return answer;
    }
};
*/

