class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int left = 0;              // Initialize left pointer
        int sum = 0;               // Initialize sum of current window
        int max_len = 0;           // Initialize max length found

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right]; //Add current element to sum

            // Shrink window from left if sum exceeds k
            while (sum > k) { // loop bcz might have to shrink more than one element
                sum -= nums[left]; // Remove element at left from sum
                left++;            // Move left pointer right to shrink window
            }
            //Check if sum matches k
            if (sum == k) {
                int current_len = right - left + 1;  // Calculate current window length
                if (current_len > max_len) {         // Update max_len if current is longer
                    max_len = current_len;
                }
            }
        }

        return max_len;  // Return the longest subarray length with sum = k
    }
};

// works onky for the positives