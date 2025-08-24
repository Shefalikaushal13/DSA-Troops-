public class SearchInRotatedSorted_Anubha {
    public static void main(String[] args) {
        int[] arr = {7,8,9,1,2,3,4,5,6};
        int target = 1;
        System.out.println(searchInRotatedSorted(arr, target));
    }

    public static int searchInRotatedSorted(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (arr[low] <= arr[mid]) {
                if (target >= arr[low] && target <= arr[mid]) high = mid - 1;
                else low = mid + 1;
            }
            else {
                if (target >= arr[mid] && target <= arr[high]) low = mid + 1;
                else high = mid - 1;
            }
            if (arr[mid] == target) return mid;
        }
        return -1;
    }
}
