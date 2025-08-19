class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int total = 0, count = 0;

        for (int n : nums) {
            total += n;

            if (mp.find(total - k) != mp.end()) {
                count += mp[total - k];
            }

            mp[total]++;
        }

        return count;
    }
};
