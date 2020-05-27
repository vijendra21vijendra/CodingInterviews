bool comp(vector<int> &a, vector<int> &b){
    if(a[0]!=b[0]){
        return a[0] < b[0];
    }
    return a[1]<=b[1];
}
class Solution {
public:
    bool notTypoSame(vector<int> &a, vector<int> &b){
        if(a[0]!=b[0] && a[1]!=b[1]) return true;
        return false;
    }
    bool available(vector<int> &a, vector<int> &b, set<pair<int,int>> &hash){
        if(hash.find(make_pair(a[0],b[1]))!= hash.end() && hash.find(make_pair(b[0],a[1]))!=hash.end()){
            return true;
        }
        return false;
    }
    int minAreaRect(vector<vector<int>>& points) {
        
        set<pair<int,int>> hash;
        for(auto point: points){
            hash.insert(make_pair(point[0],point[1]));
        }
        int miniArea= 1e9;
        for(int i=0;i<points.size();++i){
            for(int j=i+1;j<points.size();++j){
                  if(notTypoSame(points[i],points[j])){
                      if(available(points[i],points[j],hash)){
                         miniArea = min(miniArea, abs(points[i][0]-points[j][0])*abs(points[i][1]-points[j][1]));
                      }
                  }
                }
            }
        return miniArea==1e9?0:miniArea;
      //  return miniArea;
        }
};
