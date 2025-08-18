class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size = nums.size(); 
        int max_count = 0;
        int curr_count = 0; 
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=1){
                if(curr_count>max_count) max_count=curr_count;
                curr_count=0;  
            }
            else{
                curr_count++; 
            }

        }
        if(curr_count>max_count) max_count=curr_count; // endcase 
        return max_count;
        
    }
};