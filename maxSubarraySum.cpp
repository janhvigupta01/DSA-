class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int ans=0;
        int sum=0;
        int n=arr.size();
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        ans=sum;
        for(int i=0;i<n-k;i++){
            sum-=arr[i];
            sum+=arr[i+k];
            ans=max(sum,ans);
        }   
            
        return ans;

    }
};
