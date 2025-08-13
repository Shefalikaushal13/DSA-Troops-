class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;   // lowest price seen so far
        int max_profit = 0;        // best profit so far

        for (int price : prices) {
            min_price = min(min_price, price);            // update lowest price
            max_profit = max(max_profit, price - min_price); // check profit if sold today
        }
        return max_profit;
    }
};
