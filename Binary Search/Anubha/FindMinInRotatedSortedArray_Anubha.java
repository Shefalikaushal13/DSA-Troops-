public class FindMinInRotatedSortedArray_Anubha {
    public static void main(String[] args) {
        int[] arr = {11,13,15,17};
        System.out.println(minInRotatedSortedArray(arr));
    }

    public static int minInRotatedSortedArray(int[] arr) {
        int min = Integer.MAX_VALUE;
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (arr[mid] < min) min = arr[mid];
            if (arr[mid] > arr[high]) {
                low = mid + 1;
            } else high = mid - 1;
        }
        return min;
    }
}
