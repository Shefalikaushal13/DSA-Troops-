class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int curr_count=1; 
        int max_count=1; 

        sort(nums.begin(),nums.end()); 

        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1]) continue; //skip duplicates
            if(nums[i]==(nums[i+1]-1))
            {
                curr_count++; 
                max_count=max(max_count,curr_count);
            }
            else{
                curr_count=1;
            }
        }
        return max_count;
    }
};