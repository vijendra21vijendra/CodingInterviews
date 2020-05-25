class Solution {
public:
    bool magic(string &s, int i, int val ){
        if(val < 0) return false;
        if(val==0 && i == s.length()) return true;
        if(s[i]=='(') return magic(s,i+1,val+1);
        if(s[i]==')') return magic(s,i+1,val-1);
        if(s[i]=='*') {
            return magic(s,i+1,val) || magic(s,i+1,val-1) || magic(s,i+1,val+1);
        }
        return false;
    }
    bool checkValidString(string s) {
        return magic(s,0,0);
    }
};
