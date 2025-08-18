class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size(); 
        if (size == 1) return nums[0]; // fixed index
        int result = 0;
        for (int i = 0; i < size; i++) {
            result ^= nums[i]; // XOR each number
        }
        return result; // only the single number remains
    }
};
