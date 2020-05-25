class Solution {
public:
    int maxVowels(string s, int k) {
        vector<int> nvowels(s.length()+1,0);
        for(int i=0;i<s.length();++i){
            char ch= s[i];
            nvowels[0]=0;
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                nvowels[i+1] = nvowels[i] + 1;
            }else{
                nvowels[i+1]= nvowels[i];
            }
        }
        int maxi=0;
        for(int i=k;i<=s.length();++i){
            maxi = max(maxi, nvowels[i]-nvowels[i-k]);
        }
        return maxi;
    }
};
