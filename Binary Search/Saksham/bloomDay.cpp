class Solution {
public:

    int maxArray(vector<int> arr, int n){
        int max = INT_MIN ;
        for(int i = 0 ; i < n ; i++)
        {
            if(max<arr[i]) max = arr[i]; 
        } 
        return max ; 
    }

    bool check(vector<int> nums,int m,int k, int mid)
    {
        int adj_found = 0 ; // counts the adjacent founds 
        int count = 0; // increase only if adj_count == k flowers 
        // then reset the adj_found again 

        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]<=mid)
            {
                adj_found++;
                if(adj_found==k)
                {
                    adj_found=0; 
                    count++;
                }
            }
            else
            {
                adj_found=0;
            }
        }
        if(count>=m) return true; 
        else return false;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        //int lo = minArray(bloomDay,bloomDay.size());
        int lo = 0 ; 
        int hi = maxArray(bloomDay,bloomDay.size()); 
        int ans = -1; 
        while(lo<=hi)
        {
            int mid = lo +(hi - lo)/2; 
            if(check(bloomDay,m,k,mid)==true)
            {
                // this is our potential answer 
                ans = mid ; 
                // also check the left side (min problem)
                hi = mid - 1; 
            }
            else lo = mid + 1; 
        }
        return ans; 
        
    }
};