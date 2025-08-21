public class singleDuplicate_Anubha {
    public static void main(String[] args) {
        int[] arr = {1,2,2,3,3};
        System.out.println(singleNonDuplicate(arr));
    }

    public static int singleNonDuplicate(int[] arr) {
        int low = 0;
        int high = arr.length - 1;
        if(arr.length == 1) return arr[0];
        while (low < high) {
            int mid = low + (high - low)/2;
            if (mid % 2 != 0) mid--;
            if (arr[mid] == arr[mid + 1]) low = mid + 2;
            else high = mid;
        }
        return arr[low];
    }
}
