import java.util.ArrayList;
import java.util.Arrays;

public class UnionOfArrays_Anubha {
    public static void main(String[] args) {
        int[] arr1 = {3,4,6,7,9,9};
        int[] arr2 = {1,5,7,8,8};
        System.out.println(Arrays.toString(unionArray(arr1, arr2)));
    }

    /**
     *  @TimeComplexity - O(M+N), M = arr1.length() & N = arr2.length()
     *  @SpaceComplexity - O(M+N) [for result array]
     */
    public static int[] unionArray(int[] arr1, int[] arr2) {
        ArrayList<Integer> result = new ArrayList<>();
        int i = 0;
        int j = 0;
        int lastAdded = 0;
        while (i < arr1.length && j < arr2.length) {
            if (arr1[i] == arr2[j]) {
                if (arr1[i] != lastAdded) {
                    result.add(arr1[i]);
                    lastAdded = arr1[i];
                }
                i++;
                j++;
            }
            else if (arr1[i] < arr2[j]) {
                if (arr1[i] != lastAdded) {
                    result.add(arr1[i]);
                    lastAdded = arr1[i];
                }
                i++;
            }
            else if (arr1[i] > arr2[j]) {
                if (arr2[j] != lastAdded) {
                    result.add(arr2[j]);
                    lastAdded = arr2[j];
                }
                j++;
            }
        }
        while (i < arr1.length && arr1[i] != lastAdded) {
            result.add(arr1[i]);
            lastAdded = arr1[i];
            i++;
        }
        while (j < arr2.length && arr2[j] != lastAdded) {
            result.add(arr2[j]);
            lastAdded = arr2[j];
            j++;
        }
        return result.stream().mapToInt(Integer::intValue).toArray();
    }
}
