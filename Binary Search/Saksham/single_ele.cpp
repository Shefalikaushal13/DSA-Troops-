class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size = nums.size(); 
        int lo = 0 ; 
        int hi = size-1 ; 
        if (size == 1) return nums[0];
        if (size == 2) return -1; 
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            if (mid>0&&mid<nums.size()&&nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid]; 
            // first element should be on even and second on odd (ideal)
            if(mid%2 == 1) mid--;  // come to the first occ 
            if(nums[mid]==nums[mid+1]) lo = mid+2; //go right 
            else hi = mid-1; // single elememnt on the left side 
            
        }
        return nums[lo];
    }
};