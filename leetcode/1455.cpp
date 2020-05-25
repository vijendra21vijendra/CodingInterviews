class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int i,j;
        i=0;
        j=0;
        int spaces=0;
        while(i < sentence.length() - searchWord.length()+1){
            while(i< sentence.length()&&j<searchWord.length()&&sentence[i+j]==searchWord[j]) ++j;
            if(j==searchWord.size()){
                return spaces + 1;
            }
            spaces+=1;
            while(i<sentence.length() && sentence[i]!=' ') ++i;
            if(i<sentence.length()) ++i;
        }
        
        return -1;
    }
};
