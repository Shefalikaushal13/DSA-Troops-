public class FindHowManyTimesTheArrayIsRotated_Anubha {
    public static void main(String[] args) {
        int[] arr = {7};
        System.out.println(findKRotation(arr));
    }

    public static int findKRotation(int[] arr) {
        int low = 0;
        int min = Integer.MAX_VALUE;
        int high = arr.length - 1;
        if (arr[low] <= arr[high]) return 0;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (arr[mid] < min) {
                min = arr[mid];
            }
            if (arr[mid] > arr[high]) {
                low = mid + 1;
            } else high = mid - 1;
        }
        return low;
    }
}


