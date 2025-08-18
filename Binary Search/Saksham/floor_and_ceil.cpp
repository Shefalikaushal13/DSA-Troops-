class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int lo = 0 ; 
        int hi = nums.size()-1; 
        vector<int> ans(2,-1); 
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            if (nums[mid]==x) 
            {
                ans[0] = x; 
                ans[1] = x; 
                return ans; 
            }
            else if (nums[mid]<x)
            {
                //it can be potential floor 
                ans[0] = nums[mid]; 
                lo = mid+1; 
            }
            else{
                ans[1]= nums[mid]; //potential ceil 
                hi = mid - 1;
            }
        }
        return ans;

   
    }
};