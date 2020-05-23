class Solution{
  public:
    int countElem(vector<int> &v){
        int count=0;
        set<int> s;
        for(int x : v){
            s.insert(x);
        }
        for(int x: v){
            if(s.count(x+1)==1) ++count;
        }
        return count;
    }
};

// calculate the x's such that x+1 is also present in the array add duplicate also.

