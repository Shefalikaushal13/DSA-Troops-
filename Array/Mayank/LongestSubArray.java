public class LongestSubArray {
    public static void main(String[] args) {
        int[] nums = {-1, 1, 1};
        int k = 1;
        System.out.println(longestSubarray(nums, k));    
    }

    public static int longestSubarray(int[] nums, int k){
        int i = 0;
        int count = 0;
        while (i < nums.length - 1) { 
            int j = i + 1;
            int currentSum = nums[i];
            while (j < nums.length) { 
                currentSum += nums[j];
                if (currentSum == k) {
                    if (count < (j - i + 1)) {
                        count = j - i + 1;
                    }
                    j++;
                    currentSum = nums[i];
                }else {
                    j++;
                }
            }
            i++;
        }
        return count;
    }
}