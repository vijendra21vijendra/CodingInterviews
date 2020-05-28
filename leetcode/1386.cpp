   bool comp(vector<int> &a, vector<int> &b){
        if(a[0]!=b[0]){
            return a[0]<b[0];
        }else{
            return a[1]<b[1];
        }
    }

class Solution {
public:
    void print(vector<vector<int>>& rs){
        cout<<"[";
          for(auto x: rs){
              cout<<"[";
              for(auto p: x){
                  cout<<p<<" ";
              }
              cout<<"]";
          }
        cout<<"]";
        cout<<endl;
    }
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
        sort(rs.begin(),rs.end(),comp);
        print(rs);
       // return 1;
        int cnt=0;
        cnt += (n - (rs[rs.size()-1][0] - rs[0][0] +1))*2;
      //  cout<<cnt<<endl;
        //cout<<"count is "<<cnt<<endl;
        int cp=rs[0][0];
        for(int i=0;i<rs.size();++i){
            int y = rs[i][0];
            if(cp!=y){
                cnt += 2*(y-cp);
                //cout<<"count is "<<cnt<<endl;
                cp = y;
            }
            int f1,f2,f3;
            f1=f2=f3=1;
            while(i< rs.size() && rs[i][0]==y){
                if((rs[i][1]==2||rs[i][1]==3||rs[i][1]==4||rs[i][1]==5) && f1==1){
                    f1=0;
                }
                if((rs[i][1]==6||rs[i][1]==7||rs[i][1]==8||rs[i][1]==9) && f2==1){
                    f2=0;
                }
                if((rs[i][1]==4||rs[i][1]==5||rs[i][1]==6||rs[i][1]==7) && f3==1){
                    f3=0;
                }
                ++i;
            }
            // if(y==2||y==3){
            //     cout<<flag<<" and "<<fp<<" "<<y<<endl;
            // }
          // cout<<flag<<" "<<fp<<endl;
            // if(flag>0){
            //     cnt += flag;
            //   //  cout<<"count is "<<cnt<<endl;
            // }else if(fp>0){
            //     cnt += fp;
            //    // cout<<"count is "<<cnt<<endl;
            // }
            if(f1>0 && f2>0){
                cnt+=2;
            }else if(f1>0 || f2>0){
                cnt+=1;
            }else if(f3>0){
                cnt+=1;
            }
            cp+=1;
            i-=1;
        }
        return cnt;
    }
};
// 1,4 1,7 4,3 3,6
// 5
//[[4,7],[4,1],[3,1],[5,9],[4,4],[3,7],[1,3],[5,5],[1,6],[1,8],[3,9],[2,9],[1,4],[1,9],//[1,10]]
