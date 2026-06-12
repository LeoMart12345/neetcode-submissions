class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> set;

        for(int i = 0; i < nums.size(); ++i){
            if(set.find(nums[i]) != set.end()){
                return true;
                
            }
            set.insert(nums[i]);
        }
        return false;
    }
};
