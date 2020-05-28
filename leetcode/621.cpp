class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> arr(26,0);// for storing freq of each char
        for(char ch: tasks){
            arr[ch-'A']+=1;
        }
        sort(arr.begin(),arr.end());
        // first thing here is that we don't have to tell exact path but we
        // have to tell the cycles only so mathamatics will do our work
        int p = arr[25];
        p-=1;// first get executed
        int maxIdle = p*n;// this is maximum idle when we do idle after each one
        int i=24;
        while(i>=0){
           maxIdle -= min(arr[i], p);
            --i;
        }
        return maxIdle>0?tasks.size()+maxIdle:tasks.size();
    }
};
