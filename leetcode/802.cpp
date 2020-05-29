class Solution {
public:
    set<int> safe;
    set<int> notsafe;
    bool isOk(vector<vector<int>> &graph, int a, set<int> &ss){
        if(safe.count(a)) return true;
        if(notsafe.count(a)) return false;
        for(int i=0;i<graph[a].size();++i){
            if(ss.count(graph[a][i])==1){
                notsafe.insert(graph[a][i]);
                return false;
            }else{
               ss.insert(graph[a][i]);
               bool status = isOk(graph,graph[a][i],ss);
               if(status==false){
                   notsafe.insert(graph[a][i]);
                   return false;
               }
              ss.erase(graph[a][i]);
            }
        }
        safe.insert(a);
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> answer;
        for(int i=0;i<n;++i){
            set<int> ss;
            ss.insert(i);
            if(isOk(graph,i,ss)){
                safe.insert(i);
                answer.push_back(i);
            }else{
                notsafe.insert(i);
            }
        }
        return answer;
    }
};
