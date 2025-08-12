public class IsArraySortedAndRotated_Anubha {
    public static void main(String[] args) {
        int[] nums = {1,1,1};
        System.out.println(isArraySortedAndRotated(nums));
    }

    public static boolean isArraySortedAndRotated(int[] nums) {
        int count = 0;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < nums[i-1]) count++;
        }
        if (nums[nums.length-1] > nums[0]) count++;
        if (count == 1 || count == 0) return true;
        return false;
    }
}
