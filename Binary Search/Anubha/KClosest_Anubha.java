import java.util.Arrays;

public class KClosest_Anubha {
    public static void main(String[] args){
        int[] arr = {1,2,3,4,5};
        int k = 4;
        int x = 3;
        System.out.println(Arrays.toString(kClosest(arr, k, x)));
    }

    public static int[] kClosest(int []arr, int k, int x) {
        int low = 0;
        int high = arr.length - 1;
        while (high - low >= k) {
            if (x - arr[low] <= arr[high] - x) high--;
            else low++;
        }
        return Arrays.copyOfRange(arr, low, high + 1);
    }
}
