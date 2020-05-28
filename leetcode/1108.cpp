class Solution {
public:
    string defangIPaddr(string address) {
        string answer = address;
        answer.resize(address.length()+6);
        int i,j;
        i = answer.length()-1;
        j  = address.length()-1;
        while(i>=0){
            if(address[j]=='.'){
                answer[i] = ']';
                --i;
                answer[i] = address[j];
                --i;
                answer[i] = '[';
            }else{
                answer[i] = address[j];
            }
            --i;
            --j;
        }
        return answer;
    }
};
