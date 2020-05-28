class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i=0;
        int cnt=0;
        int n = arr.size();
        while(i < n && cnt < n){
            if(arr[i]==0){
                cnt+=2;
            }else{
                cnt+=1;
            }
            ++i;
        }
        --i;
        int j= n-1;
        if(cnt>n){
           arr[j]=0;
            --i;
            --j;
        }
        while(i>=0){
            if(arr[i]==0){
                arr[j]=0;
                --j;
                arr[j]=0;
            }else{
                arr[j]=arr[i];
            }
            --i;
            --j;
        }
        
    }
};
