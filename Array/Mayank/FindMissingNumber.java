
import java.util.ArrayList;

public class FindMissingNumber{
    public static void main(String[] args) {
        int[] nums = {9,6,4,2,3,5,7,0,1};
        System.out.println(missingNumber(nums));
    }

    public static int missingNumber(int[] nums){
        ArrayList<Integer> list  = new ArrayList<>();
        for (int num : nums) {
            list.add(num);
        }

        for (int i = 0; i <= nums.length; i++) {
            if (!list.contains(i)) {
                return i;
            }
        }

        return -1;
    }
}