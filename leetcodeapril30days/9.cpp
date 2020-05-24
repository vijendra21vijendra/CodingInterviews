class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.length(), m = t.length();
        int c1=0,c2=0;
        int i,j;
        i = n-1;
        j = m-1;
        while(i>=0 && j>=0){
          
                if(s[i]=='#'){
                    --i;
                    ++c1;
                    continue;
                }
                if(s[i]!='#' && c1>0){
                    --i;
                    --c1;
                    continue;
                }
                
                if(t[j]=='#'){
                    --j;
                    ++c2;
                    continue;
                }
                if(t[j]!='#' && c2>0){
                    --j;
                    --c2;
                    continue;
                }
            if(s[i]==t[j]){
                --i;
                --j;
            }else{
                return false;
            }
        }
      while(i>=0){
          if(s[i]=='#'){
                    --i;
                    ++c1;
                    continue;
                }
                if(s[i]!='#' && c1>0){
                    --i;
                    --c1;
                    continue;
                }
          return false;
      }
        
        while(j>=0){
            if(t[j]=='#'){
                    --j;
                    ++c2;
                    continue;
                }
                if(t[j]!='#' && c2>0){
                    --j;
                    --c2;
                    continue;
                }
            return false;
        }
        return true;
    }
};
