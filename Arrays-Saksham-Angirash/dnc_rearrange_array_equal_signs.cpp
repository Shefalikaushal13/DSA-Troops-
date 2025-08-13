class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size(); 
        vector<int> p; //positive vector
        vector<int> n; //negative vector
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>=0) p.push_back(nums[i]); //positive array
            else n.push_back(nums[i]); //negative array
        }
        nums.clear();//empting nums for storing result 
        for(int i=0; i<p.size(); i++)
        {
            nums.push_back(p[i]); 
            nums.push_back(n[i]); 
        } 
        return nums;
    }
};

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //two pointer approach
        int p_idx = 0; 
        int n_idx= 1 ; 
        vector<int> result(nums.size());
        for(int num:nums)
        {
            if(num>=0){
                //positive 
                result[p_idx]=num;
                p_idx+=2;
            }
            else 
            {
                //negative
                result[n_idx]=num;
                n_idx+=2;
            }

        }
        return result;
    }
};