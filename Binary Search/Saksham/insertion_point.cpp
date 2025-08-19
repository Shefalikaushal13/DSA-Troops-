class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0 ; 
        int hi = nums.size()-1; 
        int ans = nums.size(); //if it is largest then have to be stored at the last idx
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2; 
            if (nums[mid]==target) return mid; 
            else if (nums[mid]<target)lo = mid + 1; 
            else hi = mid - 1;
        }
        return lo;
        
    }
};