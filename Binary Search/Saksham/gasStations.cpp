class Solution {
  public:
    double maximumAdjDist(vector<int> nums,int n)
    {
        int maxDist = 0; 
        for(int i = 1 ; i<n ; i++)
        {
            int adjdistance = nums[i]-nums[i-1]; 
            if(adjdistance>maxDist) maxDist = adjdistance; 
        }
        return maxDist; 
    }
    
    bool check (vector<int>& nums, int k ,double dist)
    {
        int count = 0 ; // count of current stations
        for(int i = 1 ; i<nums.size(); i++)
        {
            double adjDistance = nums[i]-nums[i-1]; 
            if(adjDistance>dist)
            {
                int needed = (int)ceil(adjDistance/dist)-1; 
                // we need to fit needed amount of stations btw them 
                count+=needed; 
                if(count>k) return false; 
            }
        }
        return true;
        
    }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        double lo = 0 ; 
        double hi = maximumAdjDist(stations,stations.size());
        double ans = maximumAdjDist(stations,stations.size()); 
        while(hi - lo > 1e-6) // we can stop like when the interval is very small
        {
            // stop when dist goes like 0.000001
            double mid = lo+(hi-lo)/2; 
            if(check(stations,k,mid)==true)
            {
                ans = mid ; 
                hi = mid; 
            }
            else lo = mid;
        }
        return ans; 
        
        
    }
};