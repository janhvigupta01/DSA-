class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int n=ast.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(i>=0 && !st.empty() && st.top()<0 && ast[i]>0){
               int prev=abs(st.top());
                int cur=ast[i];
                if(cur>prev)st.pop();
                else if(cur==prev){
                    st.pop();
                    i--;
                }
                else{
                    i--;
                }
            
            }
            if(i>=0){
                st.push(ast[i]);
            }
        }
        vector<int>res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};
