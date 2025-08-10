import java.util.ArrayList;
public class IsSortedArray {
    public static void main(String[] args) {
        ArrayList<Integer> nums = new ArrayList<>();
        nums.add(1);
        nums.add(2);
        nums.add(3);
        nums.add(4);
        nums.add(5);

        System.out.println(isSorted(nums));
    }

    public static boolean isSorted(ArrayList<Integer> nums) {
        if (nums.size() == 1) return true;
        if (nums.get(0) > nums.get(nums.size() - 1)) return false;
        int i = 0;
        while(i < nums.size() - 1){
            if (nums.get(i) > nums.get(i+1)) {
                return false;
            }
            i++;
        }
        return true;
    }
}