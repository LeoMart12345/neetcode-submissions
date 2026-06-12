class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mapping; // number, index

        for(int i = 0; i < nums.size(); ++i){
            int numberTarget = target - nums[i];

            if(mapping.find(numberTarget) != mapping.end()){
                return {mapping[numberTarget], i};
            }
            mapping.insert({nums[i], i});
        }

        return {};
    }
};