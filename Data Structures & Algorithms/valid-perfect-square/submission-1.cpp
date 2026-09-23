class Solution {
public:
    bool isPerfectSquare(int num) {

        long long l = 0, r = num;

        while(l <= r){
            long long mid = l + (r-l)/2;
            long long square = mid * mid;
            if(square > num) r = mid - 1;
            else if(square < num) l = mid + 1;
            else return true;
        }
        return false;       
    }
};