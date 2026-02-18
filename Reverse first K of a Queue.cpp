class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int>st;
        int n=q.size();
        if(k>n) return q;
        for(int i=0;i<k;i++){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        for(int i=0;i<n-k;i++){
            int len=q.front();
            q.push(len);
            q.pop();
        }
        return q;
        
    }
};
