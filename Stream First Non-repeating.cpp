class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        queue<char>q;
        unordered_map<char,int>freq;
        string res="";
        for(auto it:s){
            freq[it]++;
            //if current occurence is first occurence then push it into queue
            if(freq[it]==1){
                q.push(it);
            }
            while(!q.empty() && freq[q.front()]>1){
                q.pop();
            }
            if(q.empty())res+='#';
            else res+=q.front();
        }
        return res;
        
    }
};

