public class LargestElement_Anubha {
    public static void main(String[] args) {
        int[] nums = {-4,-3,0,1,-8};
        System.out.println(largestElement(nums));
    }

    public static int largestElement(int[] nums) {
        int largestElement = nums[0];
        for (int i = 0; i < nums.length; i++) {
            if(nums[i] > largestElement) {
                largestElement = nums[i];
            }
        }
        return largestElement;
    }
}