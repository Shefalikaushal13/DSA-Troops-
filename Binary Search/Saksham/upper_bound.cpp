class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int hi = nums.size()-1; 
        int lo = 0 ; 
        int ans = nums.size(); //inti with a hypothetical ans 

        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            if(nums[mid]>x)
            {
                ans = mid ; // potential answer 
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        return ans;
        
    }

};