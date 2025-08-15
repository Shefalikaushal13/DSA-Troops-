public class LinearSearch {
    public static void main(String[] args) {
        int[] nums = {2, -4, 4, 0, 10};
        int target = -6;
        System.out.println(linearSearch(nums, target));
    }
    public static int linearSearch(int nums[], int target) {
        if(nums.length == 1 && nums[0] == target) return 0;
        if(nums.length == 0) return -1;
        
        for(int i = 0; i < nums.length; i++){
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }
}