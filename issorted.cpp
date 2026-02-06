class Solution {
  public:
  
    bool sorted(vector<int>& arr,int i){
        
        if(i==0) return true;
        
        return ((arr[i]>=arr[i-1]) && sorted(arr,i-1));
        
        
    }
  
    
    bool isSorted(vector<int>& nums) {
        // code here
        int i=nums.size()-1;
        return sorted(nums,i);
    }
};
