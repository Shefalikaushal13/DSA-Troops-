class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = 0 ; 
        int hi = nums.size()-1; 
        vector<int> ans(2,-1); 
        while(lo<=hi) //for the first occurence 
        {
            int mid = lo + (hi-lo)/2; 
            if(nums[mid]==target)
            {
                ans[0] = mid ; //potential answer
                hi = mid - 1 ; // keep searching left for last entry 
            }
            else if (nums[mid]<target) lo = mid +1; 
            else hi = mid -1 ;
        }
        //reset lo and hi first 
        lo = 0 ; 
        hi = nums.size()-1;
         while(lo<=hi) //for the last occurence 
        {
            int mid = lo + (hi-lo)/2; 
            if(nums[mid]==target)
            {
                ans[1] = mid ; //potential answer
                lo = mid + 1 ; // keep searching right for last entry 
            }
            else if (nums[mid]<target) lo = mid +1; 
            else hi = mid -1 ;
        }
        return ans; 
        
    }
};