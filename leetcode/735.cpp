class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;
        int n = ast.size();
        for(int i=0;i<n;++i){
            if(st.empty()||st.top()<0||ast[i]>0){
                st.push(ast[i]);
            }else{
                st.push(ast[i]);
                int temp1,temp2;
                while(st.size()>1){
                    temp1  = st.top();st.pop();
                    temp2 = st.top();st.pop();
                    
                    if(temp2<0 || temp1>0){
                        st.push(temp2);
                        st.push(temp1);
                        break;
                    }else if(temp2 + temp1 < 0){
                        st.push(temp1);
                    }else if (temp2 + temp1 >0){
                        st.push(temp2);
                        break;
                    }
                }
            }
        }
        
        if(st.size()==0) return {};
        vector<int> answer(st.size());
        int i=answer.size()-1;
        while(!st.empty()){
            answer[i] = st.top();
            --i;
            st.pop();
        }
        return answer;
    }
};
