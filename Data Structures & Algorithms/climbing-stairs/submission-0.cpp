class Solution {
public:
    int climbStairs(int n) {

        std::vector<int> dp(n + 1);
        // two choices = 1 step or 2 steps

        dp[0] = 1;
        dp[1] = 1;

        //fibonnai
        for(int i = 2; i < n + 1; i++){
            dp[i] = dp[i -1] + dp[i - 2];
        }

        return dp[n];
    }
};
