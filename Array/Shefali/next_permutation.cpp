class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //direct STL function
        //next_permutation(nums.begin(),nums.end());


        //manual approach
        int size=nums.size();
        int dip=-1; //dip where nums[i]<nums[i+1]
        for(int i=size-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                dip=i;
                break;
            }
        }

        if(dip==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=size-1;i>dip;i--){
            if(nums[i]>nums[dip]){
                swap(nums[dip],nums[i]);
                break;
            }
        }
        reverse(nums.begin()+dip+1,nums.end());

    }
};
