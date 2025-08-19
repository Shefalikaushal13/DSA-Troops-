import java.util.Arrays;

public class FloorAndCeil_Anubha {
    public static void main(String[] args) {
        int[] arr = {};
        int target = 1;
        System.out.println(Arrays.toString(floorAndCeil(arr, target)));
    }

    public static int[] floorAndCeil(int[] arr, int target) {
        int[] ans = {-1,-1};
        int low = 0;
        int high = arr.length - 1;
        if(arr.length == 0) return ans;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (arr[mid] < target) low = mid + 1;
            else if (arr[mid] == target) {
                ans[0] = arr[mid];
                ans[1] = arr[mid];
                return ans;
            } else high = mid - 1;
        }
        if (high < 0) {
            ans[0] = -1;
            ans[1] = arr[high + 1];
            return ans;
        }
        if (low > arr.length - 1){
            ans[0] = arr[low - 1];
            ans[1] = -1;
            return ans;
        }
        ans[0] = arr[high];
        ans[1] = arr[high + 1];
        return ans;
    }
}
