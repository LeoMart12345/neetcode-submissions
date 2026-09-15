class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currentLowest = INT_MAX;
        int currentHighest = 0;
        int maxprofit = currentHighest - currentLowest;
            
        for(int i = 0; i < prices.size(); i++){
            
            currentLowest =std::min(prices[i], currentLowest);
            
            maxprofit = std::max(maxprofit, prices[i] - currentLowest);
        }
        return maxprofit;
    }
};