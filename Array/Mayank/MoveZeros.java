import java.util.Arrays;
public class MoveZeros{
    public static void main(String[] args) {
        int[] nums = {0,0,0,1,3,-2};
        moveZeroes(nums);
        System.out.println(Arrays.toString(nums));
    }

    public static void moveZeroes(int[] nums) {
        int i = 0;
        while (i < nums.length) { 
            if (nums[i] == 0) {
                shiftArray(nums, i);
            }
            i++;
        }
    }

    public static void shiftArray(int[] nums, int index){
        for (int i = index; i < nums.length - 1; i++) {
            nums[i] = nums[i + 1];
        }
        nums[nums.length - 1] = 0;
        if (nums[0] == 0) {
            shiftArray(nums, 0);        
        }
    }
}