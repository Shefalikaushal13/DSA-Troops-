class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int maj_ele = nums[0]; 
        int vote = 0 ; //postive value of vote means we are on the winning candidate 
        for(int i=0; i<size; i++)
        {
            if(nums[i]==maj_ele)
            {
                vote++;
            }
            else{
                vote--; 
                if(vote<0) 
                {
                    maj_ele = nums[i];
                    // if we are updating major element , also increase the count 
                    vote++;
                }

            }
            
        }
        return maj_ele;
        
    }
};