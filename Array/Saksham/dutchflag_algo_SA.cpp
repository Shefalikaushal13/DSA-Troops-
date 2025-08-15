class Solution {
public:
    void sortColors(vector<int>& nums) {
        // three pointer approach 
        int low=0;//move low only if found 0 
        int high=nums.size()-1; //move high only if found 2
        int mid=0;//mid to swapping 
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]); 
                low++; 
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]); 
                high--; 
                //mid++; to avoid 1 being swapped and left behind 
            }
            else mid++;
        }
        
    }
};