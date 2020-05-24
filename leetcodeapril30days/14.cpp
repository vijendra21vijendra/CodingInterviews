class Solution {
public:
    // {[0,1] , [1,4],[0,6]} 0 left shift, 1 right shift
    string shiftString(string s, vector<pair<int,int>> &vec){
       int total=0;
       // left shift - , right shift +
       for(auto it : vec){
       	if(it.first == 0){
       		 total -= it.second;
		   }else{
		   	total += it.second;
		   }
	   }
	   total = total%(s.length());
	   if(total<0){
	   	total += s.length();
	   }
	   return s.substr(total)  + s.substr(0,total);
       
    }
};

