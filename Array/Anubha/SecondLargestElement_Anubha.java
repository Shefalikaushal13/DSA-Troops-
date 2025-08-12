import java.util.Arrays;

public class SecondLargestElement_Anubha {
    public static void main(String[] args) {
        int[] nums = {7, 7, 2, 2, 10, 10, 10};
        System.out.println(SecondLargestElement(nums));
    }

    public static int SecondLargestElement_brute(int[] nums) {
        Arrays.sort(nums);
        int secLargest = -1;
        for (int i = nums.length - 1; i >= 0; i--) {
            if (nums[i] != nums[nums.length-1]) {
                secLargest = nums[i];
                break;
            }
        }
        return secLargest;
    }

    public static int SecondLargestElement_better(int[] nums) {
        int secLargest = -1;
        int largest = nums[0];
        for (int i = 0; i < nums.length; i++) if (nums[i] > largest) largest = nums[i];
        for (int i = 0; i < nums.length; i++) if (nums[i] > secLargest && nums[i] != largest) secLargest = nums[i];
        return secLargest;
    }

    public static int SecondLargestElement(int[] nums) {
        int largest = nums[0];
        int secLargest = Integer.MIN_VALUE;
        int temp;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] > largest) {
                temp = largest;
                largest = nums[i];
                secLargest = temp;
            }
            if (nums[i] < largest) {
                if (nums[i] > secLargest) secLargest = nums[i];
            }
        }
        if (secLargest == Integer.MIN_VALUE) return -1;
        return secLargest;
    }
}
