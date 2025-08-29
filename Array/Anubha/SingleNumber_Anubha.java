import java.util.Arrays;

public class SingleNumber_Anubha {
    public static void main(String[] args) {
        int[] arr = {4,1,2,1,2};
        System.out.println(singleNumber_optimal(arr));
    }

    /**
     * @TimeComplexity - O(n log n) + O(n) = O(n log n)
     * @SpaceComplexity - O(log n)
     */
    public static int singleNumber(int[] arr) {
        Arrays.sort(arr);
        if (arr.length == 1) return arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (i != arr.length - 1) {
                if (arr[i] == arr[i+1]) i = i + 1;
                else return arr[i];
            }
            else {
                return arr[i];
            }
        }
        return 0;
    }

    /**
     * @TimeComplexity O(n) + O(n) + O(n/2 + 1) ~ O(3n)
     * @SpaceComplexity O(n/2 + 1) ~ O(n)
     */
    public static int singleNumber_better(int[] arr) {
        int max = Integer.MIN_VALUE;
        for (int i : arr) if (i > max) max = i;
        int[] hash = new int[max+1];
        Arrays.fill(hash, 0);
        // map can also be used
        for (int j : arr) hash[j]++;
        for (int i = 0; i < hash.length; i++) {
            if (hash[i] == 1) return i;
        }
        return 0;
    }

    /**
     * @TimeComplexity O(n)
     * @SpaceComplexity O(1)
     */
    public static int singleNumber_optimal(int[] arr) {
        int xor = 0;
        for (int j : arr) {
            xor = xor ^ j;
        }
        return xor;
    }
}
