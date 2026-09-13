class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // check to see if the dulicate was near...
        std::unordered_map<int, int> uM;
        
        for(int i = 0; i < nums.size(); i++){
            if(uM.find(nums[i]) != uM.end() && std::abs(i - uM[nums[i]]) <= k){
                return true;
            }
            uM[nums[i]] = i;
        }
        return false;
    }
};