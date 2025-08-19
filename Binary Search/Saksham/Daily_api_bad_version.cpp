// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo = 1 ; 
        int hi = n ; 
        int ans = -1; 
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2; 
            if(isBadVersion(mid)==false)
            {
                lo = mid + 1; 
            }
            else    // if(isBadVersion(mid)==true)
            {
                ans = mid ; //probable answer
                // still keep going to left as it might not be the leftest entry.
                hi = mid - 1;

            }
        }
        return ans;
    }
};