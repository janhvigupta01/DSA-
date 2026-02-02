class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";

        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {   // letters + digits
                st += tolower(s[i]);
            }
        }

        string gt = st;
        reverse(gt.begin(), gt.end());

        return st == gt;
    }
};
