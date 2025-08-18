class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end()); //directly using STL
        
    }
};

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1]){
                pivot = i ; //note that pivot
                break;
            }
        }

        if(pivot==-1) return reverse(nums.begin(),nums.end()); //means doest found , so its the last combo 

        for(int i = nums.size()-1; i>pivot ; i--){
            if(nums[i]>nums[pivot])
            {
                swap(nums[i],nums[pivot]); 
                break; 
            }
        }
        reverse(nums.begin()+ pivot + 1,nums.end());
        
    }
};