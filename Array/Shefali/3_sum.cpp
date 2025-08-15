class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        if(nums.size()<3){
            return {};
        }
        if(nums[0]>0){
            return {};
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){ //if number is +ve stop becausewe cant make the sum zero by searching after it
                break;
            }
            if(i>0 && nums[i]==nums[i-1]){ //if number is getting repeated, skip this iteration to avoid duplicates
                continue;
            }
            int low=i+1, high=n-1;
            int sum=0;
            while(low<high){
                sum=nums[i]+nums[low]+nums[high];
                if(sum>0){
                    high--; //sum +ve means we need more negative numbers so decrement high
                }else if(sum<0){
                    low++;
                } else{
                    ans.push_back({nums[i],nums[low],nums[high]});
                    int last_low_occurence=nums[low], last_high_occurence=nums[high]; 
                    //to avoid duplicate triplets, navigate to last occurences of nums[low] and nums[high]
                    while(low<high && nums[low]==last_low_occurence){
                        low++;
                    }
                    while(low<high && nums[high]==last_high_occurence){
                        high--;
                    }
                }
            }
        }
        return ans;
    }
};
