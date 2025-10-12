class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<ransomNote.size();i++){
            mp1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            mp2[magazine[i]]++;
        }
       for(auto ele : mp1){
        int s = ele.second;
        int f = ele.first;
        if(mp2.find(f)!=mp2.end()){
            if(mp2[f] < s) return false;
        }
        else{
            return false;
        }
       }
        
        return true;
    }
};