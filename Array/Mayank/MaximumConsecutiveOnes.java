public class MaximumConsecutiveOnes {
    public static void main(String[] args) {
        int[] nums = {1, 0, 1, 1, 1, 0, 1, 1, 1};
        System.out.println(findMaxConsecutiveOnes(nums));
    }

    public static int findMaxConsecutiveOnes(int[] nums) {
        int i = 0;
        int maxCount = 0;
        int currentCount = 0;
        while(i < nums.length){
            if (nums[i] == 1) {
                currentCount++;
                if (currentCount > maxCount) {
                    maxCount = currentCount;
                }
            }else{
                currentCount = 0;
            }
            i++;
        }

        return maxCount;
    }
}