class Solution {
public:
    int maxPower(string s) {
        int power,mpower;
        power=1;
        mpower=1;
        for(int i=1;i<s.length();++i){
            if(s[i]==s[i-1]){
                power+=1;
            }else{
                if(power> mpower){
                    mpower = power;
                }
                power = 1;
            }
        }
        if(power> mpower){
            mpower = power;
        }
        return mpower;
    }
};
