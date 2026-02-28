class Solution {
public:
    string mergeCharacters(string s, int k) {
        int i=0;while(i<s.size()){
            bool flag=false;
            char ch=s[i];
            for(int j=i+1;j<s.size() && j-i<=k;j++){
                if(ch==s[j]){
                    s.erase(j,1);
                    flag=true;
                    i=0;
                    break;
                }
            }
            if(!flag)i++;
        }
        return s;
    }
};
