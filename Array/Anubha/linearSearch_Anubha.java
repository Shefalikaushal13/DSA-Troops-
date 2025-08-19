public class linearSearch_Anubha {
    public static void main(String[] args) {
        int[] nums = {1, 3, 5, -4, 1};
        int target = 1;
        System.out.println(linearSearch(nums, target));
    }

    public static int linearSearch(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }
}
