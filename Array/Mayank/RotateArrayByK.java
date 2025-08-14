
import java.util.Arrays;

public class RotateArrayByK {
    public static void main(String[] args) {
        int[] nums = {3, 4, 1, 5, 3, -5};
        int k = 8;
        rotateArray(nums, k);
        System.out.println(Arrays.toString(nums));
        
    }

    public static  void rotateArray(int[] nums, int k) {
        if (nums.length == 1) return;
        
        if ((k % nums.length) > 0) {
            k = k % nums.length;
        }

        for(int i = 0; i < k; i++){
            rotateArrayByOne(nums);
        }

    }

    public static void rotateArrayByOne(int[] nums) {
        int i = 0;
        int firstValue = nums[0]; 
        while(i < nums.length - 1){
            nums[i] = nums[i + 1];
            i++;
        }
        nums[nums.length - 1] = firstValue;
    }
}