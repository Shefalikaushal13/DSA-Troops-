class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size(); 
        if(size==0) return 0; 
        if (size == 1 )return 1; 

        int next_unique_idx=0; 
        for(int i=0 ; i<size-1; i++)
        {
            if(nums[i]!=nums[i+1])
            {
                // we found an unique element; 
                // save the unique element at the next_unique_idx 
                nums[next_unique_idx]=nums[i]; 
                next_unique_idx++; 
            }
            // we can skip for the equal part
        }

        // handle the last case explicitly 
        nums[next_unique_idx] = nums[size - 1]; // fill the last element 
        next_unique_idx++;
        return next_unique_idx;
    
        
    }
};