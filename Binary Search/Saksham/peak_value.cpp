class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int lo = 0 ; 
        int hi = nums.size()-1; 
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2; 
            bool left_ok = (mid==0 || nums[mid-1]<nums[mid]); 
            bool right_ok = (mid==nums.size()-1 || nums[mid+1]<nums[mid]); 

            if(left_ok && right_ok) return mid; 
            else if (nums[mid] < nums[mid + 1])
            {
                //slope is on the right 
                lo = mid+1; 

            }
            else hi = mid - 1; 

        }
        return -1; // we wont reach here 
        
    }
};