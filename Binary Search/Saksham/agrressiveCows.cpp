class Solution {
  public:
  
  
    int check (vector<int> stalls, int k , int dist)
    {
        int count = 1;  // place first cow at first stall
        int lastPos = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPos >= dist) {
                count++;
                lastPos = stalls[i];
            }
        if (count >= k) return true;
    }
    return false;
    }
  
  
    int aggressiveCows(vector<int> &stalls, int k) {
        sort (stalls.begin(), stalls.end()); 
        // code here
        int lo = 1; // atleast a distance of 1 btw cows , all unique
        int hi = stalls.back()-stalls.front(); // max possible distance
        
        int ans = -1 ; // we wont reach here 
        
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2; 
            if(check(stalls,k,mid)==true)
            {
                // we have to look for a max distance 
                ans = mid ; // this can be our potential ans  
                // check right 
                lo = mid + 1; 
            }
            else hi = mid - 1 ; //else go left
        }
        return ans; 
        
    }
};