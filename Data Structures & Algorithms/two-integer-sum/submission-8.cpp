class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            //int numToGet = target - nums[i];
            for(int j = i + 1; j < nums. size(); j++){
                if(nums[i] + nums[j] == target){
                    if( i < j) return {i, j};
                    else {return {i, j};}
                }
            }
        }
    }
};
