
import java.util.Arrays;

class RemoveElement {
    public static void main(String[] args) {
        int[] nums = {3,3};
        int val = 5;
        System.out.println(removeElement(nums, val));
        System.out.println(Arrays.toString(nums));
    }
    public static int removeElement(int[] nums, int val) {
        int i = 0;
        int j = 0;
        while (i < nums.length) { 
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
            i++;
        }
        return j;
    }
}