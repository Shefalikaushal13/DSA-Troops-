class Solution {
public:
    int maxofArray(vector<int>arr ,int n)
    {
        int max = INT_MIN; 
        for(int i = 0; i<n; i++)
        {
            if(arr[i]>max) max = arr[i]; 
        }
        return max; 
    }
    bool check(vector<int> piles,int h,int mid)
    {
        int count_hours = 0 ; 
        for(int i = 0 ; i < piles.size(); i++)
        {
            int extra_hour  = piles[i]/mid;
            // add extra 1 hour only if its not divisible 
            if(piles[i]%mid==0) count_hours += extra_hour;
            else {
                count_hours = count_hours + 1 + extra_hour;
            } 
            if(count_hours>h) return false;  
        }
        return true; 

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1 ; 
        int hi = maxofArray(piles,piles.size());//fastest rate 
        int ans = -1;
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2; 
            // check if coco can eat in mid hours 
            // if yes update the answers 
            if(check(piles,h,mid)==true)
            {
                //update the ans 
                ans = mid; // most probable ans approach 
                // there is a possibility that it can eat in less than mid too (minimising)
                hi = mid - 1;
            }
            else lo = mid+1; 
        }
        return ans; 
        
    }
};