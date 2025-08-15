
import java.util.ArrayList;
import java.util.Arrays;

public class TwoSum {
    public static void main(String[] args) {
        int[] nums = {3,2,4};
        int target = 6;
        System.out.println(Arrays.toString(twoSum(nums, target)));
    }

    public static int[] twoSum(int[] nums, int target) {
        if(nums.length == 2 && nums[0] + nums[1] == target) return new int[] {0, 1};
        ArrayList<Integer> list = new ArrayList<>();
        for (int num : nums) {
            list.add(target - num);
        }

        for (int i = 0; i < nums.length; i++) {
            if (list.contains(nums[i]) && i != list.indexOf(nums[i])) {
                return new int[]{i, list.indexOf(nums[i])};
            }
        }

        return new int[]{-1, -1};
    }
}