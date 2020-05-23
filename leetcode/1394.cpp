#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        // vector<int> freq(arr.size(),0);
        // for(int i=0;i<arr.size();++i){
        //     if(arr[i]>=1 && arr[i]<= arr.size()){
        //         freq[arr[i]-1]+=1;
        //     }
        // }
        // int i=arr.size()-1;
        // while(i>=0){
        //     if(freq[i]==i+1){
        //         return i+1;
        //     }
        //     --i;
        // }
        // return -1;
        
        map<int,int> mp;
        int answer=-1;
        for(auto x:arr){
            mp[x]+=1;
        }
        for(auto p: mp){
            if(p.second == p.first && p.first > answer){
                answer = p.first;
            }
        }
        return answer;
    }
};

int main()
{


return 0;
}

