public class SearchInsertPosition_Anubha {
    public static void main(String[] args) {
        int[] arr = {1001};
        int target = 5;
        System.out.println(searchInsertPosition(arr, target));
    }

    public static int searchInsertPosition(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (arr[mid] < target) low = mid + 1;
            else if (arr[mid] == target) {
                return mid;
            } else high = mid - 1;
        }
        return high + 1;
    }
}
