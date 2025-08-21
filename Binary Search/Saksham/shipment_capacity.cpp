class Solution {
public:

    int sumOfArray(vector<int>nums,int n)
    {
        int sum = 0 ; 
        for ( int i = 0 ; i< n ; i++)
        
        {
            sum += nums[i]; 
        }
        return sum ;
    }
    int maxElementArray(vector<int>nums,int n)
    {
        int max = INT_MIN; 
        for (int i = 0 ; i < n ; i++)
        {
            if (max<nums[i]) max = nums[i]; 
        }
        return max; 
    }


    bool check(vector<int> weights, int days, int capacity)
    {
        int count = 1 ;
        int current_weight = 0; 
        for(int i=0 ; i<weights.size(); i++)
        {
            if (current_weight + weights[i] > capacity) {
                count++;
                current_weight = 0;
            }
            current_weight += weights[i];

        }
        if(count<=days) return true; 
        else return false; 
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = maxElementArray(weights,weights.size()); 
        int hi = sumOfArray(weights,weights.size()); 
        int ans = -1; // we are never reaching this answer according to the question 
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2; 
            if (check(weights,days,mid)==true)
            {
                // this can be my probable answer 
                ans = mid ; 
                // keep searching for the left as this is min prblm 
                hi = mid - 1; 

            }
            else lo = mid+1;
        }
        return ans; 


        
    }
};