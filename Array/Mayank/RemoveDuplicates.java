

public class RemoveDuplicates {
    public static void main(String[] args) {
        int[] nums = {-30, -30, 0, 0, 10, 20, 30, 30}; 
        System.out.println(removeDuplicates(nums));
    }

    public static int removeDuplicates(int[] nums) {
        if(nums.length == 1) return 1;
        int i = 0;
        for (int j = 1; j< nums.length; j++){
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
}