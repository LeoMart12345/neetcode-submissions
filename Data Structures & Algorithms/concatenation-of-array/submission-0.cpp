class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int> ans(nums.size() * 2);
        int numL = nums.size();
        for(int i = 0; i < numL; ++i){
            ans[i] = ans[i + numL] = nums[i];
        }
        return  ans;
    }
};