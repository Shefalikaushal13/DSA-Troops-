class Solution {
public:
    int search(vector<int>& nums, int target) {
        // if we have any rotated and we look at any index 
        // there is a obs. that at any pivot 
        // atleast either of the left side or right is sorted completely  
        int lo = 0 ; 
        int hi  = nums.size()-1; 
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2; 
            if(nums[mid]==target) return mid; 

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
        return -1; 
    }
};