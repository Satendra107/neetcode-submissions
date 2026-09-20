class Solution {
public:
    int countSeniors(vector<string>& details) {

        int ans = 0;
        for (string& d : details) {
            int ten = d[11] - '0';
            int one = d[12] - '0';
            int age = one + 10 * ten;
            if (age > 60) {
                ans++;
            }
        }
        return ans;
        
    }
};