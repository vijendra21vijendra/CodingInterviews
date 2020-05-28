class Solution {
public:
    int myAtoi(string str) {
        long long ans=0;
        int i=0;
        while(str[i]==' ') ++i;
        int flag=0;
        int neg=0;
        if(str[i]=='+'||str[i]=='-'){
            flag=1;
            if(str[i]=='-') neg=1;
            ++i;
        }
        if(str[i]<'0' || str[i]>'9'){
            return 0;
        }
        while(i< str.length() && str[i]>='0' && str[i]<='9'){
            ans = 10*ans + (str[i]-'0');
            ++i;
            if(neg){
                if(-ans <= INT_MIN) return INT_MIN;
            }else{
            if(ans>= INT_MAX ){
              return INT_MAX;
               }
            }
        }
        return neg==1?-ans:ans; 
    }
};
