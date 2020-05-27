class Solution {
public:
    void doIt(string &digits, vector<string> &answer, unordered_map<int,vector<char>>&hash,int index,string now){
    
     if(index==digits.length()){
         answer.push_back(now);
         return;
     }
        vector<char> all = hash[digits[index]-'0'];
        for(char ch: all){
            doIt(digits,answer,hash,index+1,now+ch);
        }
    }
    vector<string> letterCombinations(string digits) {
        
        vector<string> answer;
        if(digits.length()==0) return answer;
        unordered_map<int,vector<char>> hash;
        hash[2] = {'a','b','c'};
        hash[3] = {'d','e','f'};
        hash[4] = {'g','h','i'};
        hash[5] = {'j','k','l'};
        hash[6] = {'m','n','o'};
        hash[7] = {'p','q','r','s'};
        hash[8] = {'t','u','v'};
        hash[9] = {'w','x','y','z'};
        
        doIt(digits,answer,hash,0,"");
        return answer;
        
    }
};
