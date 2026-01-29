class Solution {
  public:
    bool Canplace(vector<int> &stalls, int k,int dis){
        int n=stalls.size();
        int prev=stalls[0];
        int count=1;
        for(int i=1;i<stalls.size();i++){
            int curr=stalls[i];
            if(abs(curr-prev)>=dis){
                
                prev=curr;
                count++;
            }
        }
        return count>=k;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int lo=0;
        int hi=stalls[n-1]-stalls[0];
        int ans=hi;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(Canplace(stalls,k,mid)){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
