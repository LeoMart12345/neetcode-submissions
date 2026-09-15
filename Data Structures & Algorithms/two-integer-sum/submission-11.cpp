class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // go through the nums adding each to an unordered set and if 
        //calculate target then if targer - nums[i] is seen then return true.
        std::unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int z = target - nums[i];
            if(mp.find(z) != mp.end()){
                return {mp[z], i};
            }
            //insert
            mp[nums[i]] = i;
        }
        return {};
    }
};
