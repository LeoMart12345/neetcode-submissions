class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // call it with the vector, starting with an index 0, and starting state of not owning any stocks.
        dp.resize(prices.size(), vector<int>(2, -1));
        return rec(prices, 0, false);
    }

private:
    std::vector<std::vector<int>> dp;

    int rec(std::vector<int>& prices, int i, bool bought){
        if(i == prices.size()) return 0;

        if(dp[i][bought] != -1) return dp[i][bought];
        
        int res = rec(prices, i + 1, bought);

        if(bought){ // if you own the stock
            res = std::max(res, prices[i] + rec(prices, i + 1, false));
        }else{
            res = std::max(res, -prices[i] + rec(prices, i + 1, true));
        }
        dp[i][bought] = res;
        return res;
    }
};