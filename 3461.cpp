class Solution {
public:
  
    bool hasSameDigits(string s) {

        if(s.length()==2){
            if(s[0]==s[1]){
                return true;
            }
            else return false;
        }
        string result="";
        for(int i=1;i<s.length();i++){
            int a=(s[i-1]-'0'+s[i]-'0')%10;
            result+=a;
        }
       return hasSameDigits(result);
    }
};

// estimation of crop