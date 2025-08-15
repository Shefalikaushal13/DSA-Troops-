class Solution {
public:
    int sum_of_array(vector<int>& nums)
    {
        int sum = 0 ; // store the sum of the array 
        int size = nums.size();
        for(int i= 0; i<size; i++)
        {
            sum+=nums[i];
        }
        return sum; 
    }
    int missingNumber(vector<int>& nums) {
        // sum of the array
        int n = nums.size();
        int ideal_sum=(n*(n+1))/2; 
        int actual_sum=sum_of_array(nums); 
        return ideal_sum-actual_sum;
        
    }
};