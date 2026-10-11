class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> setty;

        for(int x : nums){
           if(setty.find(x) != setty.end()){
                return true;
           } 
           setty.insert(x);
        }
        return false;
    }
};