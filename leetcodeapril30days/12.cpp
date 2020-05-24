class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto stone : stones){
            pq.push(stone);
        }
        while(!pq.empty() && pq.size()>1){
            int t1,t2;
            t1 = pq.top();
            pq.pop();
            t2 = pq.top();
            pq.pop();
            if(t1!=t2){
                pq.push(t1-t2);
            }
        }
        if(pq.empty()) return 0;
        return pq.top();
    }
};

