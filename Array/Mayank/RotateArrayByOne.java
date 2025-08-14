
import java.util.Arrays;

public class RotateArrayByOne {
    public static void main(String[] args) {
        int[] nums = {-1, 0, 3, 6};
        rotateArrayByOne(nums);
        System.out.println(Arrays.toString(nums));
    }

    public static void rotateArrayByOne(int[] nums) {
        if (nums.length == 1) return;
        int i = 0;
        int firstValue = nums[0]; 
        while(i < nums.length - 1){
            nums[i] = nums[i + 1];
            i++;
        }
        nums[nums.length - 1] = firstValue;
    }
}