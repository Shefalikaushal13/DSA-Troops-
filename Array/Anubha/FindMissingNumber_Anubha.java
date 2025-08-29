import java.util.Arrays;
import java.util.TreeMap;

public class FindMissingNumber_Anubha {
    public static void main(String[] args) {
        int[] arr = {9,6,4,2,3,5,7,0,1};
        System.out.println(missingNumber_optimised(arr));
    }

    /**
     * @TimeComplexity - O(n log n)
     * @SpaceComplexity - O(n)
     */
    public static int missingNumber(int[] arr) {
        int max = arr.length;
        int ans = 0;
        TreeMap<Integer, Boolean> map = new TreeMap<>();
        for (int j : arr) {
            map.put(j, Boolean.TRUE);
        }
        while (max >= 0) {
            if (!map.containsKey(max)) return max;
            max--;
        }
        return ans;
    }

    /**
     * @TimeComplexity - O(2n)
     * @SpaceComplexity - O(n)
     */
    public static int missingNumber_better(int[] arr) {
        int[] hash = new int[arr.length];
        Arrays.fill(hash, 0);
        for (int i: arr) {
            hash[i] = 1;
        }
        for (int i = 0; i < hash.length; i++) {
            if (hash[i] == 0) return i;
        }
        return arr.length;
    }

    /**
     * @TimeComplexity - O(n)
     * @SpaceComplexity - O(1)
     */
    public static int missingNumber_optimised(int[] arr) {
        int sum = 0;
        int actual = arr.length * (arr.length + 1)/2;
        for (int j : arr) {
            sum = sum + j;
        }
        return actual - sum;
    }
}
