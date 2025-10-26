class Solution {
public:
    int totalMoney(int n) {
        int a=n/7;
        int d=a;
        int b=n%7;
        int ans=0;
        if(a>=1){
            ans = 28;
            for(int i=1;i<a;i++){
                ans+=(28+(7*i));
            }   
        }    
        for(int i=d+1;i<(d+1)+b;i++){
            ans+=i;
        }
        return ans;
    }
};
