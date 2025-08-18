class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int size = nums.size(); 
        vector<int> ans;
        int current_leader = INT_MIN;

        for (int i = size - 1; i >= 0; i--) {
            if (nums[i] > current_leader) {
                current_leader = nums[i];
                ans.push_back(current_leader);
            }
        }
        reverse(ans.begin(), ans.end()); 
        return ans;
    }
};
