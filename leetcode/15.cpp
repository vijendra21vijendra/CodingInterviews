class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        if(arr.size()<3) return ans;
        for(int i=0;i<arr.size();){
            int j=i+1,k = arr.size()-1;
          //  cout<<i<<endl;
            int sumwant = -arr[i];
            while(j<k)
            {
                if(i==j){
                    ++j;
                    continue;
                }
                if(i==k){
                    --k;
                    continue;
                }
                if(arr[j]+arr[k]==sumwant){
                    vector<int> ap(3);
                    ap[0]= arr[i];
                    ap[1] = arr[j];
                    ap[2] = arr[k];
                   // sort(ap.begin(),ap.end());
                   // if(ss.count(ap)==0){
                        ans.push_back(ap);
                        //ss.insert(ap);
                   // }
                    int p1=k,p2 = j;
                    k-=1;
                    j+=1;
                    while(k>p1 && arr[k]==arr[p1]){
                        --k;
                    }
                    while(j< k && arr[j]==arr[p2]){
                        ++j;
                    }
                    
                }else if(arr[j]+arr[k]>sumwant){
                    --k;
                }else{
                    ++j;
                }
            }
            int p3=i;
            i+=1;
            while(i < arr.size() && arr[i]==arr[p3]) ++i;
        }
        return ans;
    }
};
