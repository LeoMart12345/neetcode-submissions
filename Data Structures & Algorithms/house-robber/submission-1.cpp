class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();
        std::vector<int> dp(n);

        if(n == 1) return nums[0];
        dp[0] = nums[0];
        dp[1] = std::max(nums[0], nums[1]);

        for(int i = 2; i < n; ++i){
            dp[i] = std::max(nums[i] + dp[i - 2], dp[i - 1]);
        }
        return dp[n - 1];
    }
};

//2, 7, 8, 10, 12

//(take 2 or 7)
//max(7, 2 + 8);
//max(10, 2+ 8 + 12); 