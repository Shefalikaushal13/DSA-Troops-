class Solution {
public:
    int maxOfArray(vector<int> arr,int n)
    {
        int max = INT_MIN; 
        for(int i = 0 ; i<n; i++)
        {
            if(arr[i]>max) max = arr[i]; 
        }
        return max; 
    }
    int sumOfArray(vector<int> nums,int n)
    {
        int sum = 0; 
        for(int i=0 ; i<n ; i++)
        {
            //sum=sum + nums[i]; 
            sum+=nums[i]; 
        }
        return sum; 
    }
    
    bool check (vector<int> arr, int maxSplits, int largestSum)
    {
        int count = 1 ; //atleast have a split
        int current_sum = 0; 
        for(int i = 0; i<arr.size(); i++)
        {
            if(current_sum+arr[i]>largestSum)
            {
                count++; 
                current_sum=0; // yahan split daal do
            }
            current_sum+=arr[i]; 
        }
        if(count<=maxSplits) return true; 
        else return false; 
    }
    int splitArray(vector<int>& nums, int k) {
        int lo = maxOfArray(nums,nums.size()); 
        int hi = sumOfArray(nums,nums.size()); 
        int ans = -1; // we wont be returning -1 

        while(lo<=hi)
        {
            int mid =lo+(hi-lo)/2; 
            if(check(nums,k,mid)==true)
            {
                ans = mid ; // this might be our potential ans. 
                hi = mid-1; // there might be better ans on the left possible
            }
            else lo = mid+1; //move to the right the ans is bigger
        }
        return ans; 

        
    }
};