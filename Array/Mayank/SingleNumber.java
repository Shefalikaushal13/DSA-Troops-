
import java.util.ArrayList;

public class SingleNumber{
    public static void main(String[] args) {
        int[] nums = {4,1,2,1,2};
        System.out.println(singleNumber(nums));
    }
    public static int singleNumber(int[] nums) {
        if(nums.length == 1) return nums[0];
        ArrayList<Integer> list = new ArrayList<>();
        for (int num : nums) {
            if (list.contains(num)) {
                list.remove(list.indexOf(num));
            }else{
                list.add(num);
            }
        }
        return list.get(0);
    }
}