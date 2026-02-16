class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(auto s:arr){
            mp[s]++;
        }
        int c=0;
        for(auto it:arr){
            if(mp[it]==1){
                c++;
                if(c==k){
                    return it;
                }
            }
        }
      return "";
    }
};
