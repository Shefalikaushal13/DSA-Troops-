public class SearchInRotatedSorted2_Anubha {
    public static void main(String[] args) {
        int[] arr = {1,1};
        int target = 0;
        System.out.println(searchInRotatedSorted(arr, target));
    }

    public static boolean searchInRotatedSorted(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (arr[mid] == target) return true;
            if (arr[mid] == arr[high] && arr[mid] == arr[low] && high != low) {
                low = low + 1;
                high = high - 1;
                continue;
            }
            if (arr[low] <= arr[mid]) {
                if (target >= arr[low] && target <= arr[mid]) high = mid - 1;
                else low = mid + 1;
            }
            else {
                if (target >= arr[mid] && target <= arr[high]) low = mid + 1;
                else high = mid - 1;
            }
        }
        return false;
    }
}
