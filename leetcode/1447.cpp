class Solution {
public:
    pair<int,int> simple(int i, int j){
        int k=2;
        while(k<= min(i,j)){
            if(i%k ==0 && j%k==0){
                i = i/k;
                j = j/k;
            }else{
                ++k;
            }
        }
        return pair<int,int>{i,j};
    }
    vector<string> simplifiedFractions(int n) {
        set<pair<int,int> > hash;
        vector<string> answer;
        string s;
        int i=1,j;
        while(i< n){
            j=i+1;
            while(j <= n){
                pair<int,int> p = simple(i,j);
                if(!hash.count(p)){
                    hash.insert(p);
                    s = ""+to_string(i)+"/"+to_string(j);
                    answer.push_back(s);
                }
                ++j;
            }
            ++i;
        }
        return answer;
    }
};
