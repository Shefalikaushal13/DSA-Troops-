
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class Union{
    public static void main(String[] args) {
        int[] nums1 = {1, 2, 3, 4, 5}; 
        int[] nums2 = {1, 2, 7}; 
        System.out.println(Arrays.toString(unionArray(nums1, nums2)));
    }

    public static int[] unionArray(int[] nums1, int[] nums2) {
        ArrayList<Integer> list = new ArrayList<>();
        for(int num1: nums1){
            if (!list.contains(num1)) {
                list.add(num1);
            }
        }

        for(int num2: nums2){
            if (!list.contains(num2)) {
                list.add(num2);
            }
        }

        Collections.sort(list);
        return list.stream().mapToInt(Integer::intValue).toArray();
    }
}