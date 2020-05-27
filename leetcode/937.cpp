bool comp(string &s1, string &s2){
  //  cout<<s1<<" "<<s2<<endl;
    
    return s1.substr(s1.find(' ')+1)<= s2.substr(s2.find(' ')+1);
}
class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> diffs;
        vector<string> answer;
        for(string sc: logs){
            if(sc[sc.find(' ')+1]>='0' && sc[sc.find(' ')+1]<='9'){
                diffs.push_back(sc);
                cout<<sc<<" is in nums"<<endl;
            }else{
                answer.push_back(sc);
                cout<<sc<<" is in chars"<<endl;
            }
        }
        sort(answer.begin(),answer.end(),comp);
        for(int i=0;i<diffs.size();++i){
            answer.push_back(diffs[i]);
        }
        return answer;
    }
};
