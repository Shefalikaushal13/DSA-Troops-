class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int curr_sum=0;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            if(curr_sum>sum){
                sum=curr_sum;
            }
            if(curr_sum<0){
                curr_sum=0; //discards this subarray and starts a new one
            }
        }
        return sum;
    }
};
