class Solution {
public:
    bool isPalindrome(string s) {

        string ans = "";

        for(int c : s){
            if(isalnum(c)){
                ans += tolower(c);
            }
        }

        return ans == string(ans.rbegin(), ans.rend());
        
    }
};
