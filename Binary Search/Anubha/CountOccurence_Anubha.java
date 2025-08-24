public class CountOccurence_Anubha {
    public static void main(String[] args) {
        int[] arr = {5,5,5,5,5,5,5};
        int target = 4;
        System.out.println(countOcc(arr, target));
    }

    public static int countOcc(int[] arr, int target) {
        int count = 0;
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (arr[mid] > target) high = mid - 1;
            else if (arr[mid] == target) {
                int left = mid;
                int right = mid;
                while (left > 0 && arr[left - 1] == target) left--;
                while (right < arr.length - 1 && arr[right + 1] == target) right++;
                return right - left + 1;
            } else low = mid + 1;
        }
        return count;
    }
}
