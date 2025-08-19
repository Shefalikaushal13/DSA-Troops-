class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = INT_MAX; // positive infinity 
        int lo = 0 ; 
        int hi = nums.size()-1; 
        if (nums.size()==2)
        {
            if(nums[0]>nums[1]) return nums[1]; 
            else return nums[0];
        }
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            if(nums[lo]<=nums[mid])
            {
                //left side is sorted 
                if(min>nums[lo]) min=nums[lo]; //probable answer 
                lo = mid+1 ;// now keep checking on the right side 
            }
            else{
                //right side is sorted 
                if(min>nums[mid]) min = nums[mid]; 
                hi = mid - 1; 
            }
        }
        return min ;
        
    }
};