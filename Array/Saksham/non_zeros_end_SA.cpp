class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_ptr = 0; 
        int size=nums.size(); 
        for(int non_zero_ptr = 0; non_zero_ptr <size;non_zero_ptr++)
        {
            if(nums[non_zero_ptr]!=0) 
            {
                swap(nums[zero_ptr],nums[non_zero_ptr]); // swap if found a non-zero element
                zero_ptr++;
            }
        }
        
    }
};