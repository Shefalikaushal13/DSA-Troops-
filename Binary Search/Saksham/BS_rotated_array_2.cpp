class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo = 0 ; 
        int hi  = nums.size()-1; 
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2; 
            if(nums[mid]==target) return true;
            
            //handle duplicates : check the testcase without duplicates 
            if(nums[lo]==nums[mid] && nums[hi]==nums[mid])
            {
                lo++; 
                hi--;
                continue;
            }            

            if(nums[lo]<=nums[mid])
            {
                //left side is sorted 
                if(nums[lo]<=target && nums[mid]>target)
                {
                    hi = mid - 1;
                    
                }
                else lo = mid + 1; 
                
            }
            else {
                //right side is sorted 
                if(nums[hi]>=target && nums[mid]<target)
                {
                    lo = mid + 1;
                }
                else hi = mid -1; 
            }
        }
        return false;
        
    }
};