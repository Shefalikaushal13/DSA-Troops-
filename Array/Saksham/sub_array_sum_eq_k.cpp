class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // using hashmap 
        unordered_map<int,int> mp; // stores prefix_sum - > frequency 
        int prefix_sum = 0; 
        int count = 0; 
        
        // set the first element of map to be 0:1 , counting the no. of zero sums 
        mp[0]=1; 

        for(int num:nums)
        {
            prefix_sum+=num;
            int need = prefix_sum-k; 
            if(mp.find(need)!=mp.end())
            {
                count+=mp[need];
            }
            mp[prefix_sum]++;
        }
        return count;
        
    }
};