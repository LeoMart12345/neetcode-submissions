class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, 0);

        dp[0] = 0; // meaning the cost to get here is 0;
        dp[0] = 0; 

        for(int i = 2; i <= n; ++i){
            dp[i] = std::min(dp[i-1] + cost[i - 1], dp[i -2] + cost[i - 2]);
        }

        return dp[n];
    }
};
