public class MaxConsecutiveOnes_Anubha {
    public static void main(String[] args) {
        int[] arr = {1,0,1,1,0,1};
        System.out.println(maxConsecutiveOnes(arr));
    }

    public static int maxConsecutiveOnes(int[] arr) {
        int maxConsOnes = 0;
        int count = 0;
        for (int j : arr) {
            if (j == 1) {
                count++;
                if (count > maxConsOnes) maxConsOnes = count;
            } else count = 0;
        }
        return maxConsOnes;
    }
}
