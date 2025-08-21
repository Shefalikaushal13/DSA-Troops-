public class LowerBound_Anubha {
    public static void main(String[] args) {
        int[] arr = {1,2,4,4,4,4,4,5};
        int target = 4;
        System.out.println(lowerBound(arr, target));
    }

    public static int lowerBound(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
}
