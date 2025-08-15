
import java.util.Arrays;

public class SortZeroOneTwo {

    public static void main(String[] args){
        int[] nums = {1, 0, 2, 1, 0};
        sortZeroOneTwo(nums);
        System.out.println(Arrays.toString(nums));
    }

    public static void sortZeroOneTwo(int[] nums){
        int i = 0;
        while (i < nums.length) { 
            int j = i + 1;
            while (j < nums.length) { 
                if (nums[j] < nums[i]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
                j++;
            }
            i++;
        }
    }
}