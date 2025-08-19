class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int min = INT_MAX; // positive infinity 
        int min_idx = -1;
        int lo = 0 ; 
        int hi = nums.size()-1; 
        if (nums.size()==2)
        {
            if(nums[0]>nums[1]) return 1; 
            else return 0;
        }
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            if(nums[lo]<=nums[mid])
            {
                //left side is sorted 
                if(min>nums[lo]) {
                    min=nums[lo];
                    min_idx = lo;
                    } //probable answer 
                lo = mid+1 ;// now keep checking on the right side 
            }
            else{
                //right side is sorted 
                if(min>nums[mid]) {
                    min = nums[mid];
                    min_idx=mid;} 
                hi = mid - 1; 
            }
        }
        return min_idx ;
        
    }
};