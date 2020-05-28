class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int n = s.length();
        for(int i=0;i<s.length();++i){
            
            int j,k;
            j = i+1;
            k = i-1;
            while(j<n && k>=0 && s[j]==s[k] ) {
                ++j;
                --k;
            }
            j-=1;
            k+=1;
            if(j-k+1 > ans.length()){
                ans = s.substr(k,j-k+1);
            }
            j = i+1;
            k = i;
            while(j<n && k>=0 && s[j]==s[k] )
            {
                ++j;
                --k;
            }
            j-=1;
            k+=1;
             if(j-k+1 > ans.length()){
                ans = s.substr(k,j-k+1);
            }
        }
        return ans;
    }
};
