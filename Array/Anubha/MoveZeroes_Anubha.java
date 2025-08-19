public class MoveZeroes_Anubha {
    public static void main(String[] args) {
        int[] nums = {0,1,0,3,4};
        moveZeroes(nums);
        for (int num : nums) System.out.println(num);
    }

    public static void moveZeroes(int[] nums) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 0) {
                count++;
            } else if (count > 0) {
                int temp = nums[i];
                nums[i] = 0;
                nums[i-count] = temp;
            }
        }
    }
}
