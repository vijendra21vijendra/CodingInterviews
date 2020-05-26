#include<bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    unordered_map<int,int> hash;
    list<int> dq;
    int maxCap;
    LRUCache(int capacity) {
        maxCap = capacity;
    }
    int get(int key) {
        if(hash.find(key)!=hash.end()){
        //	cout<<dq.size()<<endl;
            dq.remove(key);
          //  cout<<dq.size()<<endl;
            dq.push_front(key);
            return hash[key];
        }else{
            return -1;
        }
    }
    void put(int key, int value) {

        if(hash.find(key)== hash.end()){
           if(dq.size()==maxCap){
           	hash.erase(dq.back());
           	dq.pop_back();
		   }
        }else{
        	dq.remove(key);
        }
       dq.push_front(key);
       hash[key] = value;
    }
    
};

int main(){
    LRUCache *lru = new LRUCache(2);
//    lru->put(1,3);
//    lru->put(2,5);
//    cout<<lru->get(1)<<endl;
      lru->put(1,1);
      lru->put(2,2);
      cout<<lru->get(1)<<endl;
      lru->put(3,3);
      cout<<lru->get(2)<<endl;
      lru->put(4,4);
      cout<<lru->get(1)<<endl;
      cout<<lru->get(3)<<endl;
      cout<<lru->get(4)<<endl;

//cache.put(1, 1);
//cache.put(2, 2);
//cache.get(1);       // returns 1
//cache.put(3, 3);    // evicts key 2
//cache.get(2);       // returns -1 (not found)
//cache.put(4, 4);    // evicts key 1
//cache.get(1);       // returns -1 (not found)
//cache.get(3);       // returns 3
//cache.get(4);       // returns 4

/*

4 3

**************

3->3
4->4



1

*/


    return 0;
}



