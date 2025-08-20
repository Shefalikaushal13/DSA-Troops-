class Solution {
public:

    int maxArray(vector<int> arr, int n )
    {
        int max = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            if (arr[i]>max) max = arr[i];
        } 
        return max;  
    }

    bool check (vector<int> nums, int threshold, int divisor)
    {
        int sum = 0 ; 
        for(int i = 0 ; i< nums.size(); i++)
        {
            int divide = nums[i]/divisor; 
            if(nums[i]%divisor==0)sum+=divide; 
            else sum+=divide+1;
        }
        if(sum<=threshold) return true; 
        else return false; 
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1; 
        int hi = maxArray(nums,nums.size()); 
        int ans = -1; //-1 is never possible .. as per description 

        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2; 
            if(check(nums,threshold,mid)==true)
            {
                //this can be our potential ans 
                ans = mid; 
                //keep moving left as there can be smaller ans available than this 
                hi = mid - 1 ; 
            }
            else lo = mid+1; 
        }
        return ans; 
    }
};