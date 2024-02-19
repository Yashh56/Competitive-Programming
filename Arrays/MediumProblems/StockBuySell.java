package MediumProblems;

public class StockBuySell {
    static int maxProfit(int[] prices) {
        int n = prices.length;
        int profit = 0;
        int mini = prices[0];

        for (int i = 1; i < n; i++) {
            int cost = prices[i] - mini;
            profit = Math.max(profit, cost);
            mini = Math.min(prices[i], mini);
        }
        return profit;
    }
}