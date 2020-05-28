class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string answer = strs[0];
        for(int i=1;i<strs.size();++i){
            int j=0;
            string temp="";
            while(j < min(answer.length(),strs[i].length()) && answer[j]==strs[i][j]){
                temp   += answer[j];
                ++j;
            }
            if(temp=="") return "";
            answer = temp;
        }
        return answer;
    }
};
