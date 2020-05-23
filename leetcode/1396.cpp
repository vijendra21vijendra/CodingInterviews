#include<bits/stdc++.h>
using namespace std;

/* right code but gives tle
class UndergroundSystem {
private:
    struct tog{
        string place;
        int id,time;
        bool isEnter;
    };
    multimap<string,tog> mp;
    tog temp;
    string x;
public:
    UndergroundSystem() {
        // init
        
        
    }
    
    void checkIn(int id, string stationName, int t) {
        temp.id = id;
        temp.time = t;
        temp.place = stationName;
        temp.isEnter = true;
        mp.insert(make_pair(stationName,temp));
    }
    
    void checkOut(int id, string stationName, int t) {
        temp.id = id;
        temp.time = t;
        temp.place = stationName;
        temp.isEnter = false;
        mp.insert(make_pair(stationName,temp));
    }
    
    double getAverageTime(string startStation, string endStation) {
        double avgTime = 0;
        double c = 0;
        
        for(auto it : mp){
            if(it.first == startStation && it.second.isEnter){
                temp = it.second;
                for(auto xp: mp){
                    if(xp.first == endStation && xp.second.isEnter==false && xp.second.time>temp.time && xp.second.id == temp.id){
                        c +=1;
                        avgTime += (xp.second.time - temp.time);
                    }
                }
            }
        }
        if(c){
            return avgTime/c;
        }
        return 0;
    }
};

// real solution correct
class UndergroundSystem {
public:
    map<int, pair<string, int>> mp1;
    map<pair<string,string> , pair<int, int>> solution;
    
    UndergroundSystem() {
        //init
    }
    
    void checkIn(int id, string stationName, int t) {
        mp1[id] = make_pair(stationName, t);
    }
    
    void checkOut(int id, string stationName, int t) {
        pair<string, int> x = mp1[id];
        mp1.erase(id);
        solution[make_pair(x.first,stationName)].first +=1;
        solution[make_pair(x.first,stationName)].second += (t - x.second);
    }
    
    double getAverageTime(string startStation, string endStation) {
        pair<int,int> ans = solution[make_pair(startStation,endStation)];
        return (double)ans.second/(ans.first*1.0);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */

*/

int main()
{


return 0;
}

