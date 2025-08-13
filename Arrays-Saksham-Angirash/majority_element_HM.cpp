class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp; 
        for(int i = 0 ; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }//created a simple hashmap 
        //now we have to look for a element with max frequency
        int max_occ = 0; 
        int ans_key = nums[0];
        for(auto ele:mp)
        {
            int key = ele.first; 
            int value=ele.second; 
            if(value>max_occ) 
            {
                max_occ = value;
                ans_key=key;
            }    
        }
        return ans_key;

        
    }
};