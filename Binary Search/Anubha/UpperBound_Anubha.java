public class UpperBound_Anubha {
    public static void main(String[] args) {
        int[] arr = {3,5,8,15,19};
        int target = 3;
        System.out.println(upperBound(arr, target));
    }

    public static int upperBound(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if(arr[mid] > target) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
}