class Solution {
public:
    long long floorSqrt(long long n) {
        long long lo = 1, hi = n, ans = 0;
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if (mid * 1LL * mid == n) return mid;
            else if (mid * 1LL * mid < n) { // LL does make the int type cast into long long 
                ans = mid;      // store best so far
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans;   // final floor sqrt
    }
};
