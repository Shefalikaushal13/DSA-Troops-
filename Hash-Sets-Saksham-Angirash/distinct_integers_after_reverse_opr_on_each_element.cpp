class Solution {
public:
    int reverse_dgt(int x)
    {
        int reverse = 0;
        while(x>0)
        {
            int temp = x%10; 
            x/=10; 
            reverse = reverse*10+temp;
        }
        return reverse;

    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s; 
        for (int i = 0; i< nums.size() ; i++)
        {
            s.insert(nums[i]);
            s.insert(reverse_dgt(nums[i])); 
        }
        return s.size();
        
    }
};