public class StockBuyAndSell {
    public static void main(String[] args) {
        int[] arr =  {10, 7, 5, 8, 11, 9};
        System.out.println(stockBuySell(arr));
    }
    public static int stockBuySell(int[] arr) {
        int minPrice = arr[0];
        int maxProfit = 0;

        for (int i = 1; i < arr.length; i++) {
            maxProfit = Math.max(maxProfit, arr[i] - minPrice);
            minPrice = Math.min(minPrice, arr[i]);
        }
        return maxProfit;
    }
}