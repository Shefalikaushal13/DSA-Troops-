class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxP=0,min_price=prices[0];
        for(int i=1;i<n;i++){
            maxP=max(maxP, prices[i]-min_price);
            min_price=min(prices[i],min_price);
        }
        return maxP;
    }
};
