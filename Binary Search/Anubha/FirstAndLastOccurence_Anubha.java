import java.util.Arrays;

public class FirstAndLastOccurence_Anubha {
    public static void main(String[] args) {
        int[] arr = {1};
        int target = 1;
        System.out.println(Arrays.toString(firstLastOcc(arr, target)));
    }

    public static int[] firstLastOcc(int[] arr, int target) {
        int[] ans = {-1, -1};
        if (arr.length == 0) return ans;
        if (arr.length == 1) {
            if (arr[0] == target) {
                ans[0] = 0;
                ans[1] = 0;
            }
            return ans;
        }
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (arr[mid] < target) low = mid + 1;
            else if (arr[mid] == target) {
                int left = mid;
                int right = mid;
                while (left > 0 && arr[left - 1] == target) left--;
                while (right < arr.length - 1 && arr[right + 1] == target) right++;
                ans[0] = left;
                ans[1] = right;
                return ans;
            } else high = mid - 1;
        }
        return ans;
    }
}
