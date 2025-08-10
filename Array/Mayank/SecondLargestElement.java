import java.util.Arrays;
public class SecondLargestElement{
    public static void main(String[] args) {
        int[] nums = {8, 8, 7, 6, 5};
        System.out.println(secondLargestElementSolution1(nums));
        System.out.println(secondLargestElementSolution2(nums));
    }

    //solution one -> more faster but uses Array Sort
    public static int secondLargestElementSolution1(int[] nums) {
        if(nums.length == 1) return -1;
        Arrays.sort(nums);
        int max = nums[nums.length - 1];
        int second_max = -1;
        for(int num : nums){
            if(num > second_max && max > num){
                second_max = num;
            }
        }

        return second_max;
    }

    //solution 2 -> Slower but no sorting
    public static int secondLargestElementSolution2(int[] nums) {
        if(nums.length == 1) return -1;
        int max = getMaxElement(nums);
        int second_max = -1;
        for(int num: nums){
            if(num < max && second_max < num){
                second_max = num;
            }
        }

        return second_max;
    }

    public static int getMaxElement(int[] nums){
        int max = nums[0];
        for(int num : nums){
            if(max < num){
                max = num;
            }
        }
        return max;
    }
}