public class BinarySearch_Anubha {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 7, 9, 12, 13, 17};
        int target = 7;
        System.out.println(binarySearchIterative(arr, target));
    }

    public static int binarySearchIterative(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) return mid;
            else if (arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
}