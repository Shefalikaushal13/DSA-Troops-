public class LargestElement {
    public static void main(String[] args) {
        int[] nums = {3, 3, 6, 1};
        int max = largestElement(nums);
        System.out.println(max);
    }

    public static int largestElement(int[] nums) {
        if (nums.length == 1) return nums[0];

        int max = nums[0];

        for(int num: nums){
            if (max < num) {
                max = num;
            }    
        }
        return max;
    }
}