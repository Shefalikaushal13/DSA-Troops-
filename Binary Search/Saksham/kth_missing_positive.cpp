class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int lo = 0 ; 
        int hi = nums.size(); 
        while(lo<=hi)
        {
            int mid = lo + (hi-lo) / 2; 
            int no_of_missing = arr[mid] - ( mid + 1 ); //mid+1 to avoid 0 based indexing 
            if (no_of_missing < k) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return k + hi + 1;
        
    }
};